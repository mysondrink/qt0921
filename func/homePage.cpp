//
// Created by x on 2023/9/27.
//

#include "homePage.h"
#include "home.h"
#include <QWidget>
#include <QGuiApplication>
#include <QScreen>
#include <QDebug>
#include "powerPage.h"
#include "sysPage.h"
#include "testPage.h"
#include "historyPage.h"
#include "editPage.h"

homePage::homePage(QWidget *parent) : QWidget(parent) , ui(new Ui::HomeForm){
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setFocusPolicy(Qt::NoFocus);

    QRect rec = QGuiApplication::primaryScreen()->geometry();
    this->move(rec.left(), rec.top() + screen_top);
    this->showMaximized();
}

homePage::~homePage() noexcept {
    delete ui;
}

void homePage::on_btnData_clicked() {
    testPage *page_msg = new testPage();
    emit this->next_page(page_msg);
}

void homePage::on_btnHistory_clicked() {
    historyPage *page_msg = new historyPage();
    emit this->next_page(page_msg);
}

void homePage::on_btnPower_clicked() {
    powerPage *page_msg = new powerPage();
    emit this->next_page(page_msg);
}

void homePage::on_btnSet_clicked() {
    editPage *page_msg = new editPage();
    emit this->next_page(page_msg);
}

void homePage::on_btnPara_clicked() {
    sysPage *page_msg = new sysPage();
    emit this->next_page(page_msg);
}
