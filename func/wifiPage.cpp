//
// Created by x on 2023/9/27.
//

#include "wifiPage.h"
#include "wifi.h"
#include <QWidget>
#include <QGuiApplication>
#include <QScreen>
#include <QDebug>
#include "sysPage.h"


wifiPage::wifiPage(QWidget *parent) : QWidget(parent), ui(new Ui::WifiForm){
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setFocusPolicy(Qt::NoFocus);

    QRect rec = QGuiApplication::primaryScreen()->geometry();
    this->move(rec.left(), rec.top() + screen_top);
    this->showMaximized();
}

wifiPage::~wifiPage() noexcept {
    delete ui;
}

void wifiPage::on_btnConfirm_clicked() {
    qDebug() << "on_btnconfirm_clicked";
}

void wifiPage::on_btnReturn_clicked() {
    qDebug() << "on_btnreturn_clicked";
    sysPage *page_msg = new sysPage();
    emit this->next_page(page_msg);
}