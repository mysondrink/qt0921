#include "loginPage.h"
#include "login.h"
#include <QWidget>
#include <QGuiApplication>
#include <QScreen>
#include <QDebug>
#include "homePage.h"
#include "registerPage.h"

loginPage::loginPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginForm)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setFocusPolicy(Qt::NoFocus);

//    QRect rec = QApplication::desktop()->screenGeometry();
    QRect rec = QGuiApplication::primaryScreen()->geometry();
    this->move(rec.left(), rec.top() + screen_top);
    this->showMaximized();
//    this->setParent(parent); //设置依附的窗口，存在问题：会创建多个重复子窗口。
}

loginPage::~loginPage()
{
    delete ui;
}

void loginPage::on_loginBtn_clicked() {
    qDebug() << "on_loginbtn_clicked";
    homePage *page_msg = new homePage();
    emit this->next_page(page_msg);
}

void loginPage::on_registerBtn_clicked() {
    qDebug() << "on_registerBtn_clicked";
    registerPage *page_msg = new registerPage();
    emit this->next_page(page_msg);
}