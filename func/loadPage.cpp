#include "loadPage.h"
#include "loading.h"
#include <QWidget>
#include <QGuiApplication>
#include <QScreen>
#include <QDebug>
#include "cameraThread.h"
#include "serialThread.h"
#include "dbThread.h"
#include <QTimer>
#include <QVBoxLayout>
#include "loginPage.h"

loadPage::loadPage(QWidget *parent)
        : QWidget(parent)
        , ui(new Ui::LoadForm)
{
    ui->setupUi(this);
    this->InitUI();
}

loadPage::~loadPage()
{
    delete ui;
}

void loadPage::InitUI() {
    qDebug() << "initUI" << endl;
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setFocusPolicy(Qt::NoFocus);

//    QRect rec = QApplication::desktop()->screenGeometry();
    QRect rec = QGuiApplication::primaryScreen()->geometry();
    this->move(rec.left(), rec.top());
    this->showMaximized();

    this->ui->title_label->setText("荧光判读仪器");
    this->ui->time_label->setText(" ");
    this->ui->btnRetry->hide();
    this->ui->retry_icon_label->hide();
    this->ui->textEdit->setEnabled(false);

    this->startThread();
}

void loadPage::changePage(QWidget *msg) {
    qDebug() << "changepage" << endl;
    if(cur_page != NULL){
        cur_page->close();
    }
    cur_page = msg;
    connect(cur_page, SIGNAL(next_page(QWidget *)), this, SLOT(changePage(QWidget *)));
    cur_page->setFocus();
    v->addWidget(cur_page);
}

void loadPage::showPage() {
    qDebug() << this->flag_num;
    if(this->flag_num == 0){
        qDebug() << "showpage" << endl;
        v = new QVBoxLayout(this);
        cur_page = new loginPage(this);
        cur_page->setFocus();
        connect(cur_page, SIGNAL(next_page(QWidget *)), this, SLOT(changePage(QWidget *)));
//        当进行addWidget操作后程序闪退
//        v->addWidget(curPage);
        v->setSpacing(0);
        v->setContentsMargins(0, 0, 0, 0);
        this->ui->centerframe->setLayout(v);
        this->setFlagNum(-1);
    }
}

void loadPage::startThread() {
    qDebug() << "startthread" << endl;

    QThread *ptr1 = new CheckCameraThread();
    QThread *ptr2 = new serialThread();
    QThread *ptr3 = new dbThread();
    this->thread_list.push_back(ptr1);
    this->thread_list.push_back(ptr2);
    this->thread_list.push_back(ptr3);
    for (QThread *ptr : this->thread_list) {
        connect(ptr, SIGNAL(update_json(JSON)), this, SLOT(setInfoLabel(JSON)));
        ptr->start();
    }
}

void loadPage::statusShowTime() {
    qDebug() << "statusshowtime" << endl;
}

void loadPage::showCurrentTime() {
    qDebug() << "showcurrenttime" << endl;
}

void loadPage::retryThread() {
    qDebug() << "retrythread" << endl;
}

void loadPage::on_btnRetry_clicked() {
    qDebug() << "on_btnretry_clicked" << endl;
}

void loadPage::setInfoLabel(JSON msg) {
    qDebug() << "setinfolabel" << endl;
    QString info_msg = msg.info;
    int code_msg = msg.code;
    qDebug() << code_msg;
    QThread *status_msg = msg.status;
    qDebug() << status_msg;
    QList<QThread *>::iterator it = std::find(this->thread_list.begin(), this->thread_list.end(), status_msg);
    if (it != this->thread_list.end()){
        qDebug() << "find!";
        std::remove(this->thread_list.begin(), this->thread_list.end(),status_msg);
    }
    else{
        qDebug() << "not find!";
    }
    this->ui->textEdit->append(info_msg);
    QString text = this->ui->textEdit->toPlainText();
    QList<QString> lines = text.split("\n");
    if(code_msg == failed_code){
        this->retryThread();
        this->setFlagNum(-1);
    }
    else if (lines.length() == 6 && this->getFlagNum() == 0){ //lines长度为加载界面反馈信息的条数
        QTimer *change_timer = new QTimer();
        connect(change_timer, SIGNAL(timeout()), this, SLOT(showPage()));
        /*
         创建定时器
         设置定时器延迟时间，单位为毫秒
         延迟2秒跳转
         */
        int delay_time = 2000;
        change_timer->start(delay_time);
    }
}

void loadPage::setFlagNum(int num) {
    this->flag_num = num;
}

int loadPage::getFlagNum() {
    return this->flag_num;
}
