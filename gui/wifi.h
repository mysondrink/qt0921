/********************************************************************************
** Form generated from reading UI file 'wifi.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef WIFI_H
#define WIFI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WifiForm
{
public:
    QFrame *frame;
    QComboBox *wifiCb;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *pwdLine;
    QLabel *label_3;
    QPushButton *btnConfirm;
    QPushButton *btnReturn;

    void setupUi(QWidget *WifiForm)
    {
        if (WifiForm->objectName().isEmpty())
            WifiForm->setObjectName(QString::fromUtf8("WifiForm"));
        WifiForm->resize(800, 450);
        WifiForm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(WifiForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 450));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        wifiCb = new QComboBox(frame);
        wifiCb->setObjectName(QString::fromUtf8("wifiCb"));
        wifiCb->setGeometry(QRect(390, 110, 230, 70));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wifiCb->sizePolicy().hasHeightForWidth());
        wifiCb->setSizePolicy(sizePolicy);
        wifiCb->setStyleSheet(QString::fromUtf8("QComboBox::drop-down{\n"
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
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 110, 161, 73));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 210, 151, 73));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        pwdLine = new QLineEdit(frame);
        pwdLine->setObjectName(QString::fromUtf8("pwdLine"));
        pwdLine->setGeometry(QRect(390, 210, 230, 70));
        sizePolicy.setHeightForWidth(pwdLine->sizePolicy().hasHeightForWidth());
        pwdLine->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        pwdLine->setFont(font);
        pwdLine->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit{\n"
"background-color:rgba(0,0,0,255);\n"
"border:none;\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"border-bottom:2px solid rgba(0,0,0,255);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QLineEdit:hover {\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);\n"
"}\n"
"QLineEdit:focus {\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgb(0, 170, 190);\n"
"}"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 121, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        btnConfirm = new QPushButton(frame);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));
        btnConfirm->setGeometry(QRect(10, 360, 380, 80));
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
        btnReturn->setGeometry(QRect(410, 360, 380, 80));
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

        retranslateUi(WifiForm);

        QMetaObject::connectSlotsByName(WifiForm);
    } // setupUi

    void retranslateUi(QWidget *WifiForm)
    {
        WifiForm->setWindowTitle(QCoreApplication::translate("WifiForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("WifiForm", "wifi", nullptr));
        label_2->setText(QCoreApplication::translate("WifiForm", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("WifiForm", "wifi\350\256\276\347\275\256", nullptr));
        btnConfirm->setText(QCoreApplication::translate("WifiForm", "\347\241\256\350\256\244", nullptr));
        btnReturn->setText(QCoreApplication::translate("WifiForm", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WifiForm: public Ui_WifiForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WIFI_H
