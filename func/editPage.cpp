//
// Created by x on 2023/9/27.
//

#include "editPage.h"
#include "edit.h"
#include <QWidget>
#include <QGuiApplication>
#include <QScreen>
#include <QDebug>
#include "homePage.h"


editPage::editPage(QWidget *parent) : QWidget(parent), ui(new Ui::EditForm){
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setFocusPolicy(Qt::NoFocus);

    QRect rec = QGuiApplication::primaryScreen()->geometry();
    this->move(rec.left(), rec.top() + screen_top);
    this->showMaximized();
}

editPage::~editPage() noexcept {
    delete ui;
}

void editPage::resetBtn() {
    this->ui->btnConfirm->hide();
    this->ui->btnReturn->setGeometry(10, 10, 780, 80);
}

void editPage::resetBtn_2() {
    this->ui->btnConfirm->show();
    this->ui->btnReturn->setGeometry(410, 10, 380, 80);
}

void editPage::on_btnAdd_clicked() {
    this->resetBtn_2();
    this->ui->stackedWidget->setCurrentIndex(1);
}

void editPage::on_btnDelete_clicked() {
    this->resetBtn_2();
    this->ui->stackedWidget->setCurrentIndex(2);
}

void editPage::on_btnModify_clicked() {
    this->resetBtn_2();
    this->ui->stackedWidget->setCurrentIndex(3);
}

void editPage::on_btnConfirm_clicked() {
    switch (this->ui->stackedWidget->currentIndex()) {
        case 1:
            this->ui->stackedWidget->setCurrentIndex(4);
            break;
        case 2:
            break;
        case 3:
            this->ui->stackedWidget->setCurrentIndex(4);
            break;
        case 5:
            this->resetBtn();
            this->ui->stackedWidget->setCurrentIndex(0);
            break;
    }
}

void editPage::on_btnReturn_clicked() {
    if (this->ui->stackedWidget->currentIndex() == 0) {
        homePage *page_msg = new homePage();
        emit this->next_page(page_msg);
    }
    else{
        this->resetBtn();
        this->ui->stackedWidget->setCurrentIndex(0);
    }
}