//
// Created by x on 2023/9/27.
//

#include "setPage.h"
#include "set.h"
#include <QWidget>
#include <QGuiApplication>
#include <QScreen>
#include <QDebug>
#include "sysPage.h"


setPage::setPage(QWidget *parent) : QWidget(parent), ui(new Ui::SetForm){
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setFocusPolicy(Qt::NoFocus);

    QRect rec = QGuiApplication::primaryScreen()->geometry();
    this->move(rec.left(), rec.top() + screen_top);
    this->showMaximized();
}

setPage::~setPage() noexcept {
    delete ui;
}

void setPage::on_btnConfirm_clicked() {
    qDebug() << "on_btnconfirm_clicked";
}

void setPage::on_btnReturn_clicked() {
    qDebug() << "on_btnreturn_clicked";
    sysPage *page_msg = new sysPage();
    emit this->next_page(page_msg);
}