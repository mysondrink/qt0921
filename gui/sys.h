/********************************************************************************
** Form generated from reading UI file 'sys.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SYS_H
#define SYS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SysForm
{
public:
    QFrame *frame;
    QLabel *wifi_icon_label;
    QLabel *label;
    QLabel *clear_icon_label;
    QPushButton *btnSet;
    QPushButton *btnClear;
    QLabel *about_icon_label;
    QPushButton *btnWifi;
    QPushButton *btnAbout;
    QLabel *camera_icon_label;
    QPushButton *btnReturn;

    void setupUi(QWidget *SysForm)
    {
        if (SysForm->objectName().isEmpty())
            SysForm->setObjectName(QString::fromUtf8("SysForm"));
        SysForm->resize(800, 450);
        SysForm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(SysForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 450));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        wifi_icon_label = new QLabel(frame);
        wifi_icon_label->setObjectName(QString::fromUtf8("wifi_icon_label"));
        wifi_icon_label->setGeometry(QRect(100, 100, 80, 80));
        wifi_icon_label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"\n"
""));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 121, 51));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        clear_icon_label = new QLabel(frame);
        clear_icon_label->setObjectName(QString::fromUtf8("clear_icon_label"));
        clear_icon_label->setGeometry(QRect(410, 100, 80, 80));
        clear_icon_label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"\n"
""));
        btnSet = new QPushButton(frame);
        btnSet->setObjectName(QString::fromUtf8("btnSet"));
        btnSet->setGeometry(QRect(100, 220, 280, 80));
        btnSet->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color:#05abc2;\n"
"border-radius: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        btnClear = new QPushButton(frame);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setGeometry(QRect(410, 100, 280, 80));
        btnClear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color:#05abc2;\n"
"border-radius: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        about_icon_label = new QLabel(frame);
        about_icon_label->setObjectName(QString::fromUtf8("about_icon_label"));
        about_icon_label->setGeometry(QRect(410, 220, 80, 80));
        about_icon_label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"\n"
""));
        btnWifi = new QPushButton(frame);
        btnWifi->setObjectName(QString::fromUtf8("btnWifi"));
        btnWifi->setGeometry(QRect(100, 100, 280, 80));
        btnWifi->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color:#05abc2;\n"
"border-radius: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        btnAbout = new QPushButton(frame);
        btnAbout->setObjectName(QString::fromUtf8("btnAbout"));
        btnAbout->setGeometry(QRect(410, 220, 280, 80));
        btnAbout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color:#05abc2;\n"
"border-radius: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        camera_icon_label = new QLabel(frame);
        camera_icon_label->setObjectName(QString::fromUtf8("camera_icon_label"));
        camera_icon_label->setGeometry(QRect(100, 220, 80, 80));
        camera_icon_label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"\n"
""));
        btnReturn = new QPushButton(frame);
        btnReturn->setObjectName(QString::fromUtf8("btnReturn"));
        btnReturn->setGeometry(QRect(10, 360, 780, 80));
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
        label->raise();
        btnSet->raise();
        btnClear->raise();
        btnWifi->raise();
        btnAbout->raise();
        about_icon_label->raise();
        camera_icon_label->raise();
        clear_icon_label->raise();
        wifi_icon_label->raise();
        btnReturn->raise();

        retranslateUi(SysForm);

        QMetaObject::connectSlotsByName(SysForm);
    } // setupUi

    void retranslateUi(QWidget *SysForm)
    {
        SysForm->setWindowTitle(QCoreApplication::translate("SysForm", "Form", nullptr));
        wifi_icon_label->setText(QString());
        label->setText(QCoreApplication::translate("SysForm", "\347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
        clear_icon_label->setText(QString());
        btnSet->setText(QCoreApplication::translate("SysForm", "     \345\233\276\345\203\217\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        btnClear->setText(QCoreApplication::translate("SysForm", "  \346\270\205\351\231\244\347\274\223\345\255\230", nullptr));
        about_icon_label->setText(QString());
        btnWifi->setText(QCoreApplication::translate("SysForm", "  wifi\350\256\276\347\275\256", nullptr));
        btnAbout->setText(QCoreApplication::translate("SysForm", "  \345\205\263\344\272\216\344\273\252\345\231\250", nullptr));
        camera_icon_label->setText(QString());
        btnReturn->setText(QCoreApplication::translate("SysForm", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SysForm: public Ui_SysForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SYS_H
