/********************************************************************************
** Form generated from reading UI file 'history.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef HISTORY_H
#define HISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HistoryForm
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_3;
    QDateEdit *dateBox;
    QLabel *label_2;
    QComboBox *modeBox_3;
    QLabel *label;
    QWidget *page_2;
    QTableView *historyTable;
    QWidget *page_3;
    QLabel *picLabel;
    QWidget *page_4;
    QTableWidget *tableWidget;
    QFrame *frame;
    QPushButton *btnConfirm;
    QPushButton *btnReturn;
    QPushButton *btnPre;
    QPushButton *btnNext;
    QPushButton *btnDetail;
    QPushButton *btnReport;
    QPushButton *btnPrint;

    void setupUi(QWidget *HistoryForm)
    {
        if (HistoryForm->objectName().isEmpty())
            HistoryForm->setObjectName(QString::fromUtf8("HistoryForm"));
        HistoryForm->resize(800, 450);
        HistoryForm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        stackedWidget = new QStackedWidget(HistoryForm);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 350));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 211, 51));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        dateBox = new QDateEdit(page);
        dateBox->setObjectName(QString::fromUtf8("dateBox"));
        dateBox->setGeometry(QRect(340, 70, 230, 70));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateBox->sizePolicy().hasHeightForWidth());
        dateBox->setSizePolicy(sizePolicy);
        dateBox->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QDateEdit::drop-down\n"
"{\n"
"width:56px;  height:56px;\n"
"}\n"
"\n"
"\n"
"QCalendarWidget{\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(5, 171, 194);\n"
"}\n"
"\n"
"QCalendarWidget QAbstractItemView:enabled{\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(5, 171, 194);\n"
"}\n"
"\n"
"QCalendarWidget QToolButton{\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(5, 171, 194);\n"
"}\n"
"\n"
"QCalendarWidget QToolButton QMenu{\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(5, 171, 194);\n"
"}\n"
"\n"
"QCalendarWidget QSpinBox#qt_calendar_yearedit{\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"background:#05abc2;\n"
"height:34px;\n"
"width:125px;\n"
"selecti"
                        "on-background-color:#05abc2;\n"
"}\n"
"QCalendarWidget QSpinBox::up-button \n"
"{ subcontrol-origin: border;  subcontrol-position: top right;  width:65px; }\n"
"QCalendarWidget QSpinBox::down-button\n"
" {subcontrol-origin: border; subcontrol-position: bottom right;  width:65px;}\n"
"QCalendarWidget QSpinBox::up-arrow\n"
" { width:56px;  height:56px; }\n"
"QCalendarWidget QSpinBox::down-arrow\n"
" { width:56px;  height:56px; }"));
        dateBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        dateBox->setDateTime(QDateTime(QDate(2019, 12, 26), QTime(16, 0, 0)));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 70, 136, 67));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        modeBox_3 = new QComboBox(page);
        modeBox_3->setObjectName(QString::fromUtf8("modeBox_3"));
        modeBox_3->setGeometry(QRect(340, 210, 230, 70));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(modeBox_3->sizePolicy().hasHeightForWidth());
        modeBox_3->setSizePolicy(sizePolicy1);
        modeBox_3->setStyleSheet(QString::fromUtf8("QComboBox::drop-down{\n"
"width:56px;  height:56px;\n"
"}\n"
"\n"
"QComboBox{\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"	background-color: rgb(0, 0, 0);/*\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"    padding: 1px 2px 1px 2px;  /*\351\222\210\345\257\271\344\272\216\347\273\204\345\220\210\346\241\206\344\270\255\347\232\204\346\226\207\346\234\254\345\206\205\345\256\271*/\n"
"	color: rgb(255,255,255)\n"
"}"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 210, 171, 67));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        historyTable = new QTableView(page_2);
        historyTable->setObjectName(QString::fromUtf8("historyTable"));
        historyTable->setGeometry(QRect(10, 0, 778, 350));
        sizePolicy1.setHeightForWidth(historyTable->sizePolicy().hasHeightForWidth());
        historyTable->setSizePolicy(sizePolicy1);
        historyTable->setStyleSheet(QString::fromUtf8("#historyTable {\n"
"		font: 20pt \"\345\256\213\344\275\223\";\n"
"border:4px solid rgb(0,0,0);\n"
"}"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        picLabel = new QLabel(page_3);
        picLabel->setObjectName(QString::fromUtf8("picLabel"));
        picLabel->setGeometry(QRect(230, 10, 351, 331));
        picLabel->setStyleSheet(QString::fromUtf8("font: 60pt \"\345\271\274\345\234\206\";"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        tableWidget = new QTableWidget(page_4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 771, 341));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"border:4px solid rgb(0,0,0);\n"
"background-color:rgb(255,255,255);\n"
"}\n"
"\n"
"QTableWidget::Item\n"
"{\n"
"border:2px solid rgb(0,0,0);\n"
"background-color:rgb(255,255,255);\n"
"}\n"
""));
        stackedWidget->addWidget(page_4);
        frame = new QFrame(HistoryForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 350, 800, 100));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btnConfirm = new QPushButton(frame);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));
        btnConfirm->setGeometry(QRect(10, 10, 380, 80));
        btnConfirm->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color:#05abc2;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        btnReturn = new QPushButton(frame);
        btnReturn->setObjectName(QString::fromUtf8("btnReturn"));
        btnReturn->setGeometry(QRect(410, 10, 380, 80));
        btnReturn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color:#05abc2;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        btnPre = new QPushButton(frame);
        btnPre->setObjectName(QString::fromUtf8("btnPre"));
        btnPre->setGeometry(QRect(10, 10, 187, 80));
        btnPre->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color:#05abc2;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        btnNext = new QPushButton(frame);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));
        btnNext->setGeometry(QRect(207, 10, 187, 80));
        btnNext->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color:#05abc2;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        btnDetail = new QPushButton(frame);
        btnDetail->setObjectName(QString::fromUtf8("btnDetail"));
        btnDetail->setGeometry(QRect(404, 10, 187, 80));
        btnDetail->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color:#05abc2;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        btnReport = new QPushButton(frame);
        btnReport->setObjectName(QString::fromUtf8("btnReport"));
        btnReport->setGeometry(QRect(275, 10, 254, 80));
        btnReport->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color:#05abc2;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        btnPrint = new QPushButton(frame);
        btnPrint->setObjectName(QString::fromUtf8("btnPrint"));
        btnPrint->setGeometry(QRect(10, 10, 254, 80));
        btnPrint->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color:#05abc2;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));

        retranslateUi(HistoryForm);

        QMetaObject::connectSlotsByName(HistoryForm);
    } // setupUi

    void retranslateUi(QWidget *HistoryForm)
    {
        HistoryForm->setWindowTitle(QCoreApplication::translate("HistoryForm", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("HistoryForm", "\345\216\206\345\217\262\350\256\260\345\275\225\346\237\245\350\257\242", nullptr));
        label_2->setText(QCoreApplication::translate("HistoryForm", "\346\227\266\351\227\264", nullptr));
        label->setText(QCoreApplication::translate("HistoryForm", "\350\257\225\345\211\202\345\215\241\345\236\213\345\217\267", nullptr));
        picLabel->setText(QString());
        btnConfirm->setText(QCoreApplication::translate("HistoryForm", "\347\241\256\350\256\244", nullptr));
        btnReturn->setText(QCoreApplication::translate("HistoryForm", "\350\277\224\345\233\236", nullptr));
        btnPre->setText(QCoreApplication::translate("HistoryForm", "\344\270\212\344\270\200\347\273\204", nullptr));
        btnNext->setText(QCoreApplication::translate("HistoryForm", "\344\270\213\344\270\200\347\273\204", nullptr));
        btnDetail->setText(QCoreApplication::translate("HistoryForm", "\350\257\246\346\203\205", nullptr));
        btnReport->setText(QCoreApplication::translate("HistoryForm", "\346\212\245\345\221\212\345\215\225", nullptr));
        btnPrint->setText(QCoreApplication::translate("HistoryForm", "\346\211\223\345\215\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HistoryForm: public Ui_HistoryForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // HISTORY_H
