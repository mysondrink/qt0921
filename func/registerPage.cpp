//
// Created by x on 2023/9/27.
//

#include "registerPage.h"
#include "register.h"
#include <QWidget>
#include <QGuiApplication>
#include <QScreen>
#include <QDebug>
#include "loginPage.h"

registerPage::registerPage(QWidget *parent) : QWidget(parent), ui(new Ui::RegisterForm){
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setFocusPolicy(Qt::NoFocus);

    QRect rec = QGuiApplication::primaryScreen()->geometry();
    this->move(rec.left(), rec.top() + screen_top);
    this->showMaximized();
}

registerPage::~registerPage() noexcept {
    delete ui;
}

void registerPage::on_btnConfirm_clicked() {
    qDebug() << "on_btnconfirm_clicked";
}

void registerPage::on_btnReturn_clicked() {
    qDebug() << "on_btnreturn_clicked";
    loginPage *page_msg = new loginPage();
    emit this->next_page(page_msg);
}