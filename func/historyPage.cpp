//
// Created by x on 2023/9/27.
//

#include "historyPage.h"
#include "history.h"
#include <QWidget>
#include <QGuiApplication>
#include <QScreen>
#include <QDebug>
#include "homePage.h"


historyPage::historyPage(QWidget *parent) : QWidget(parent), ui(new Ui::HistoryForm){
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setFocusPolicy(Qt::NoFocus);

    QRect rec = QGuiApplication::primaryScreen()->geometry();
    this->move(rec.left(), rec.top() + screen_top);
    this->showMaximized();

    this->resetBtn_3();
    this->ui->btnPrint->hide();
    this->ui->btnReport->hide();
}

historyPage::~historyPage() noexcept {
    delete ui;
}

void historyPage::resetBtn() {
    this->ui->btnReport->setText("报告单");
    this->ui->btnReport->hide();
    this->ui->btnPrint->hide();
    this->ui->stackedWidget->setCurrentIndex(1);
}

void historyPage::resetBtn_2() {
    this->ui->btnNext->show();
    this->ui->btnPre->show();
    this->ui->btnDetail->show();
    this->ui->btnReturn->setGeometry(601, 10, 187, 80);
}

void historyPage::resetBtn_3() {
    this->ui->btnNext->hide();
    this->ui->btnPre->hide();
    this->ui->btnDetail->hide();
}

void historyPage::on_btnConfirm_clicked() {
    this->resetBtn_2();
    this->ui->btnConfirm->hide();
    this->ui->stackedWidget->setCurrentIndex(1);
}

void historyPage::on_btnPre_clicked() {
    qDebug() << "on_btnpre_clicked";
}

void historyPage::on_btnNext_clicked() {
    qDebug() << "on_btnnext_clicked";
}

void historyPage::on_btnDetail_clicked() {
    this->resetBtn_3();
    this->ui->btnReturn->setGeometry(539, 10, 254, 80);
    this->ui->btnReport->show();
    this->ui->btnPrint->show();
    this->ui->stackedWidget->setCurrentIndex(2);
}

void historyPage::on_btnPrint_clicked() {
    qDebug() << "on_btnprint_clicked";
}

void historyPage::on_btnReport_clicked() {
    switch (this->ui->stackedWidget->currentIndex()) {
        case 2:
            this->ui->stackedWidget->setCurrentIndex(3);
            this->ui->btnReport->setText("图像");
            break;
        default:
            this->ui->stackedWidget->setCurrentIndex(2);
            this->ui->btnReport->setText("报告单");
    }
}

void historyPage::on_btnReturn_clicked() {
    if(this->ui->stackedWidget->currentIndex() == 0){
        homePage *page_msg = new homePage();
        emit this->next_page(page_msg);
    }
    switch (this->ui->stackedWidget->currentIndex()) {
        case 1:
            this->resetBtn_3();
            this->ui->btnReturn->setGeometry(410, 10, 380, 80);
            this->ui->btnConfirm->show();
            this->ui->stackedWidget->setCurrentIndex(0);
            break;
        case 2:
        case 3:
            this->resetBtn();
            this->resetBtn_2();
            break;
    }
}