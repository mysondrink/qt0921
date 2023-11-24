//
// Created by x on 2023/9/27.
//

#include "sysPage.h"
#include "sys.h"
#include <QWidget>
#include <QGuiApplication>
#include <QScreen>
#include <QDebug>
#include "homePage.h"
#include "wifiPage.h"
#include "setPage.h"
#include "clearPage.h"
#include "aboutPage.h"


sysPage::sysPage(QWidget *parent) : QWidget(parent), ui(new Ui::SysForm){
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setFocusPolicy(Qt::NoFocus);

    QRect rec = QGuiApplication::primaryScreen()->geometry();
    this->move(rec.left(), rec.top() + screen_top);
    this->showMaximized();
}

sysPage::~sysPage() noexcept {
    delete ui;
}

void sysPage::on_btnWifi_clicked() {
    wifiPage *page_msg = new wifiPage();
    emit this->next_page(page_msg);
}

void sysPage::on_btnClear_clicked() {
    clearPage *page_msg = new clearPage();
    emit this->next_page(page_msg);
}

void sysPage::on_btnSet_clicked() {
    setPage *page_msg = new setPage();
    emit this->next_page(page_msg);
}

void sysPage::on_btnAbout_clicked() {
    aboutPage *page_msg = new aboutPage();
    emit this->next_page(page_msg);
}

void sysPage::on_btnReturn_clicked() {
    homePage *page_msg = new homePage();
    emit this->next_page(page_msg);
}