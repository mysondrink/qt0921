/********************************************************************************
** Form generated from reading UI file 'test.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef TEST_H
#define TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestForm
{
public:
    QFrame *frame;
    QPushButton *btnConfirm;
    QPushButton *btnReturn;
    QPushButton *btnExe;
    QPushButton *btnSwitch;
    QPushButton *btnPrint;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLineEdit *paraLine;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLabel *label_11;
    QLabel *label;
    QLineEdit *ageLine;
    QLineEdit *nameLine;
    QLabel *label_10;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_3;
    QComboBox *genderCb;
    QPushButton *pushButton;
    QLabel *label_5;
    QLabel *label_9;
    QComboBox *modeBox_1;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *departCb;
    QLabel *label_8;
    QLineEdit *docCb;
    QLabel *label_12;
    QLabel *typeLabel;
    QWidget *page_2;
    QTableView *exeTable;
    QWidget *page_3;
    QLabel *pic_info_label;
    QLabel *label_16;
    QLineEdit *para_4;
    QLabel *label_14;
    QLabel *label_13;
    QLineEdit *para_3;
    QLabel *photoLabel;
    QLabel *label_17;
    QLineEdit *para_2;
    QLineEdit *para_1;
    QLabel *label_15;
    QLineEdit *para_5;
    QPushButton *pushButton_8;

    void setupUi(QWidget *TestForm)
    {
        if (TestForm->objectName().isEmpty())
            TestForm->setObjectName(QString::fromUtf8("TestForm"));
        TestForm->resize(800, 450);
        TestForm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(TestForm);
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
        btnExe = new QPushButton(frame);
        btnExe->setObjectName(QString::fromUtf8("btnExe"));
        btnExe->setGeometry(QRect(10, 10, 380, 80));
        btnExe->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color:#05abc2;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        btnSwitch = new QPushButton(frame);
        btnSwitch->setObjectName(QString::fromUtf8("btnSwitch"));
        btnSwitch->setGeometry(QRect(275, 10, 254, 80));
        btnSwitch->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        stackedWidget = new QStackedWidget(TestForm);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 350));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        paraLine = new QLineEdit(page);
        paraLine->setObjectName(QString::fromUtf8("paraLine"));
        paraLine->setGeometry(QRect(166, 150, 129, 31));
        paraLine->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));
        paraLine->setInputMethodHints(Qt::ImhDigitsOnly);
        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 294, 112, 27));
        label_4->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setGeometry(QRect(19, 10, 271, 35));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMaximumSize(QSize(16777215, 50));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 171, 194);\n"
"color: rgb(0, 0, 0);\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
""));
        label_11 = new QLabel(page);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(376, 294, 131, 40));
        label_11->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 261, 112, 27));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        ageLine = new QLineEdit(page);
        ageLine->setObjectName(QString::fromUtf8("ageLine"));
        ageLine->setGeometry(QRect(516, 134, 230, 40));
        ageLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"background-color:rgba(0,0,0,255);\n"
"color: rgb(255,255,255);\n"
"}"));
        ageLine->setInputMethodHints(Qt::ImhDigitsOnly);
        nameLine = new QLineEdit(page);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));
        nameLine->setGeometry(QRect(516, 84, 230, 40));
        nameLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"background-color:rgba(0,0,0,255);\n"
"color: rgb(255,255,255);\n"
"}"));
        label_10 = new QLabel(page);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(406, 244, 80, 40));
        label_10->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        label_6 = new QLabel(page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(406, 84, 80, 40));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(80, 40));
        label_6->setMaximumSize(QSize(80, 40));
        label_6->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        label_7 = new QLabel(page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 110, 140, 27));
        label_7->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(false);
        pushButton_3->setGeometry(QRect(19, 201, 271, 35));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMaximumSize(QSize(16777215, 50));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 171, 194);\n"
"color: rgb(0, 0, 0);\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
""));
        genderCb = new QComboBox(page);
        genderCb->setObjectName(QString::fromUtf8("genderCb"));
        genderCb->setGeometry(QRect(516, 189, 230, 40));
        genderCb->setStyleSheet(QString::fromUtf8("QComboBox::drop-down{\n"
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
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(346, 10, 441, 35));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(0, 0));
        pushButton->setMaximumSize(QSize(16777215, 50));
        pushButton->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(5, 171, 194);\n"
"color: rgb(0, 0, 0);"));
        label_5 = new QLabel(page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(169, 294, 112, 27));
        label_5->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        label_9 = new QLabel(page);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(406, 189, 80, 40));
        label_9->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        modeBox_1 = new QComboBox(page);
        modeBox_1->setObjectName(QString::fromUtf8("modeBox_1"));
        modeBox_1->setGeometry(QRect(166, 67, 129, 31));
        modeBox_1->setStyleSheet(QString::fromUtf8("QComboBox::drop-down{\n"
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
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 67, 140, 27));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";\n"
""));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(169, 261, 112, 27));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        departCb = new QLineEdit(page);
        departCb->setObjectName(QString::fromUtf8("departCb"));
        departCb->setGeometry(QRect(516, 244, 230, 40));
        departCb->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"background-color:rgba(0,0,0,255);\n"
"color: rgb(255,255,255);\n"
"}"));
        label_8 = new QLabel(page);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(406, 134, 81, 51));
        label_8->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        docCb = new QLineEdit(page);
        docCb->setObjectName(QString::fromUtf8("docCb"));
        docCb->setGeometry(QRect(516, 294, 230, 40));
        docCb->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"background-color:rgba(0,0,0,255);\n"
"color: rgb(255,255,255);\n"
"}"));
        label_12 = new QLabel(page);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 150, 140, 27));
        label_12->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        typeLabel = new QLabel(page);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));
        typeLabel->setGeometry(QRect(166, 110, 129, 31));
        typeLabel->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        exeTable = new QTableView(page_2);
        exeTable->setObjectName(QString::fromUtf8("exeTable"));
        exeTable->setGeometry(QRect(10, 0, 771, 350));
        exeTable->setStyleSheet(QString::fromUtf8("#exeTable{\n"
"	font: 20pt \"\345\256\213\344\275\223\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color:rgb(255,255,255);\n"
"}\n"
"\n"
"QComboBox {\n"
"    font: 20pt \"\345\256\213\344\275\223\";\n"
"	color: rgb(0, 0, 255);\n"
"	background-color: rgb(0,0,0)\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"	background-color: rgb(0, 0, 0);/*\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"    padding: 1px 2px 1px 2px;  /*\351\222\210\345\257\271\344\272\216\347\273\204\345\220\210\346\241\206\344\270\255\347\232\204\346\226\207\346\234\254\345\206\205\345\256\271*/\n"
"	color: rgb(255,255,255)\n"
"}"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        pic_info_label = new QLabel(page_3);
        pic_info_label->setObjectName(QString::fromUtf8("pic_info_label"));
        pic_info_label->setGeometry(QRect(30, 10, 351, 31));
        pic_info_label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        label_16 = new QLabel(page_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(30, 210, 80, 30));
        label_16->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        para_4 = new QLineEdit(page_3);
        para_4->setObjectName(QString::fromUtf8("para_4"));
        para_4->setGeometry(QRect(130, 210, 230, 40));
        para_4->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"background-color:rgba(0,0,0,255);\n"
"color: rgb(255,255,255);\n"
"}"));
        label_14 = new QLabel(page_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 110, 80, 30));
        label_14->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        label_13 = new QLabel(page_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(30, 60, 80, 30));
        label_13->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        para_3 = new QLineEdit(page_3);
        para_3->setObjectName(QString::fromUtf8("para_3"));
        para_3->setGeometry(QRect(130, 160, 230, 40));
        para_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"background-color:rgba(0,0,0,255);\n"
"color: rgb(255,255,255);\n"
"}"));
        photoLabel = new QLabel(page_3);
        photoLabel->setObjectName(QString::fromUtf8("photoLabel"));
        photoLabel->setGeometry(QRect(400, 10, 351, 331));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(photoLabel->sizePolicy().hasHeightForWidth());
        photoLabel->setSizePolicy(sizePolicy1);
        photoLabel->setMinimumSize(QSize(351, 331));
        photoLabel->setMaximumSize(QSize(351, 331));
        photoLabel->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";"));
        photoLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_17 = new QLabel(page_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(30, 260, 80, 30));
        label_17->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        para_2 = new QLineEdit(page_3);
        para_2->setObjectName(QString::fromUtf8("para_2"));
        para_2->setGeometry(QRect(130, 110, 230, 40));
        para_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"background-color:rgba(0,0,0,255);\n"
"color: rgb(255,255,255);\n"
"}"));
        para_1 = new QLineEdit(page_3);
        para_1->setObjectName(QString::fromUtf8("para_1"));
        para_1->setGeometry(QRect(130, 60, 230, 40));
        para_1->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"background-color:rgba(0,0,0,255);\n"
"color: rgb(255,255,255);\n"
"}"));
        label_15 = new QLabel(page_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 160, 80, 30));
        label_15->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        para_5 = new QLineEdit(page_3);
        para_5->setObjectName(QString::fromUtf8("para_5"));
        para_5->setGeometry(QRect(130, 260, 230, 40));
        para_5->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"background-color:rgba(0,0,0,255);\n"
"color: rgb(255,255,255);\n"
"}"));
        pushButton_8 = new QPushButton(page_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(190, 310, 200, 40));
        pushButton_8->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(5, 171, 194);"));
        stackedWidget->addWidget(page_3);

        retranslateUi(TestForm);

        QMetaObject::connectSlotsByName(TestForm);
    } // setupUi

    void retranslateUi(QWidget *TestForm)
    {
        TestForm->setWindowTitle(QCoreApplication::translate("TestForm", "Form", nullptr));
        btnConfirm->setText(QCoreApplication::translate("TestForm", "\347\241\256\350\256\244", nullptr));
        btnReturn->setText(QCoreApplication::translate("TestForm", "\350\277\224\345\233\236", nullptr));
        btnExe->setText(QCoreApplication::translate("TestForm", "\345\277\253\351\200\237\346\265\213\350\257\225", nullptr));
        btnSwitch->setText(QCoreApplication::translate("TestForm", "\345\210\207\346\215\242", nullptr));
        btnPrint->setText(QCoreApplication::translate("TestForm", "\346\211\223\345\215\260", nullptr));
        label_4->setText(QCoreApplication::translate("TestForm", "\346\211\271\346\254\241\347\274\226\345\217\267", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TestForm", "\346\243\200\346\265\213\344\277\241\346\201\257", nullptr));
        label_11->setText(QCoreApplication::translate("TestForm", "\351\200\201\346\243\200\345\214\273\347\224\237*", nullptr));
        label->setText(QCoreApplication::translate("TestForm", "\346\243\200\346\265\213\351\241\271\347\233\256", nullptr));
        label_10->setText(QCoreApplication::translate("TestForm", "\347\247\221\345\256\244*", nullptr));
        label_6->setText(QCoreApplication::translate("TestForm", "\345\247\223\345\220\215*", nullptr));
        label_7->setText(QCoreApplication::translate("TestForm", "\350\257\225\345\211\202\345\215\241\350\247\204\346\240\274", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TestForm", "\346\243\200\346\265\213\344\277\241\346\201\257", nullptr));
        pushButton->setText(QCoreApplication::translate("TestForm", "\347\227\205\344\272\272\344\277\241\346\201\257", nullptr));
        label_5->setText(QString());
        label_9->setText(QCoreApplication::translate("TestForm", "\346\200\247\345\210\253*", nullptr));
        label_3->setText(QCoreApplication::translate("TestForm", "\350\257\225\345\211\202\345\215\241\345\236\213\345\217\267", nullptr));
        label_2->setText(QString());
        label_8->setText(QCoreApplication::translate("TestForm", "\345\271\264\351\276\204*", nullptr));
        label_12->setText(QCoreApplication::translate("TestForm", "\345\217\202\346\225\260(\351\200\211\345\241\253)", nullptr));
        typeLabel->setText(QString());
        pic_info_label->setText(QCoreApplication::translate("TestForm", "\347\205\247\347\211\207\347\224\237\346\210\220\344\270\255\343\200\202\343\200\202\343\200\202", nullptr));
        label_16->setText(QCoreApplication::translate("TestForm", "\345\217\202\346\225\2604", nullptr));
        label_14->setText(QCoreApplication::translate("TestForm", "\345\217\202\346\225\2602", nullptr));
        label_13->setText(QCoreApplication::translate("TestForm", "\345\217\202\346\225\2601", nullptr));
        photoLabel->setText(QString());
        label_17->setText(QCoreApplication::translate("TestForm", "\345\217\202\346\225\2605", nullptr));
        label_15->setText(QCoreApplication::translate("TestForm", "\345\217\202\346\225\2603", nullptr));
        pushButton_8->setText(QCoreApplication::translate("TestForm", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestForm: public Ui_TestForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TEST_H
