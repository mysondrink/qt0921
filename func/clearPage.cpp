//
// Created by x on 2023/9/27.
//

#include "clearPage.h"
#include "clear.h"
#include <QWidget>
#include <QGuiApplication>
#include <QScreen>
#include <QDebug>
#include "sysPage.h"


clearPage::clearPage(QWidget *parent) : QWidget(parent), ui(new Ui::ClearForm){
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setFocusPolicy(Qt::NoFocus);

    QRect rec = QGuiApplication::primaryScreen()->geometry();
    this->move(rec.left(), rec.top() + screen_top);
    this->showMaximized();
}

clearPage::~clearPage() noexcept {
    delete ui;
}

void clearPage::on_btnConfirm_clicked() {
    qDebug() << "on_btnconfirm_clicked";
}

void clearPage::on_btnReturn_clicked() {
    qDebug() << "on_btnreturn_clicked";
    sysPage *page_msg = new sysPage();
    emit this->next_page(page_msg);
}