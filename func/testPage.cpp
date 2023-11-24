//
// Created by x on 2023/9/27.
//

#include "testPage.h"
#include "test.h"
#include <QWidget>
#include <QGuiApplication>
#include <QScreen>
#include <QDebug>
#include "homePage.h"


testPage::testPage(QWidget *parent) : QWidget(parent), ui(new Ui::TestForm){
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setFocusPolicy(Qt::NoFocus);

    QRect rec = QGuiApplication::primaryScreen()->geometry();
    this->move(rec.left(), rec.top() + screen_top);
    this->showMaximized();

    this->ui->btnExe->hide();
    this->ui->btnPrint->hide();
    this->ui->btnSwitch->hide();
}

testPage::~testPage() noexcept {
    delete ui;
}

void testPage::on_btnPrint_clicked() {
    qDebug() << "on_btnprint_clicked";
}

void testPage::on_btnConfirm_clicked() {
    qDebug() << "on_btnconfirm_clicked";
    this->ui->stackedWidget->setCurrentIndex(1);
    this->ui->btnExe->show();
    this->ui->btnConfirm->hide();
}

void testPage::on_btnReturn_clicked() {
    qDebug() << "on_btnreturn_clicked";
    if(this->ui->stackedWidget->currentIndex() == 0) {
        homePage *page_msg = new homePage();
        emit this->next_page(page_msg);
    }
    else if(this->ui->stackedWidget->currentIndex() == 1){
        this->resetBtn();
        this->ui->stackedWidget->setCurrentIndex(0);
    }
    else if(this->ui->stackedWidget->currentIndex() == 2){
        this->resetBtn();
        this->ui->stackedWidget->setCurrentIndex(0);
    }
}

void testPage::on_btnExe_clicked() {
    qDebug() << "on_btnexe_clicked";
    this->ui->btnExe->hide();
    this->ui->btnSwitch->show();
    this->ui->btnPrint->show();
    this->ui->stackedWidget->setCurrentIndex(2);
    this->ui->btnReturn->setGeometry(539, 10, 254, 80);
}

void testPage::on_btnSwitch_clicked() {
    if(this->ui->stackedWidget->currentIndex() == 1){
        this->ui->stackedWidget->setCurrentIndex(2);
    }
    else if(this->ui->stackedWidget->currentIndex() == 2){
        this->ui->stackedWidget->setCurrentIndex(1);
    }
}

void testPage::resetBtn() {
    this->ui->btnSwitch->hide();
    this->ui->btnExe->hide();
    this->ui->btnPrint->hide();
    this->ui->btnConfirm->show();
    this->ui->btnReturn->setGeometry(410, 10, 380, 80);
}