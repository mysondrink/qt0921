//
// Created by x on 2023/9/27.
//

#include "aboutPage.h"
#include "about.h"
#include <QWidget>
#include <QGuiApplication>
#include <QScreen>
#include <QDebug>
#include "sysPage.h"


aboutPage::aboutPage(QWidget *parent) : QWidget(parent), ui(new Ui::AboutForm){
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setFocusPolicy(Qt::NoFocus);

    QRect rec = QGuiApplication::primaryScreen()->geometry();
    this->move(rec.left(), rec.top() + screen_top);
    this->showMaximized();
}

aboutPage::~aboutPage() noexcept {
    delete ui;
}

void aboutPage::on_btnConfirm_clicked() {
    qDebug() << "on_btnconfirm_clicked";
}

void aboutPage::on_btnReturn_clicked() {
    qDebug() << "on_btnreturn_clicked";
    sysPage *page_msg = new sysPage();
    emit this->next_page(page_msg);
}