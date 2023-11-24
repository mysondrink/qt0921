//
// Created by x on 2023/9/27.
//

#include "powerPage.h"
#include "power.h"
#include <QGuiApplication>
#include <QScreen>
#include <QDebug>
#include "homePage.h"
#include "loginPage.h"

powerPage::powerPage(QWidget *parent) : QWidget(parent), ui(new Ui::PowerForm){
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setFocusPolicy(Qt::NoFocus);

    QRect rec = QGuiApplication::primaryScreen()->geometry();
    this->move(rec.left(), rec.top() + screen_top);
    this->showMaximized();
}

powerPage::~powerPage() noexcept {
    delete ui;
}

void powerPage::on_btnReturn_clicked() {
    qDebug() << "on_btnreturn_clicked";
    homePage *page_msg = new homePage();
    emit this->next_page(page_msg);
}

void powerPage::on_btnLogout_clicked() {
    qDebug() << "on_btnlogout_clicked";
    loginPage *page_msg = new loginPage();
    emit this->next_page(page_msg);
}