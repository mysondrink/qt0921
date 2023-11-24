/********************************************************************************
** Form generated from reading UI file 'power.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef POWER_H
#define POWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PowerForm
{
public:
    QFrame *frame;
    QPushButton *btnReturn;
    QPushButton *btnShutdown;
    QPushButton *btnLogout;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *PowerForm)
    {
        if (PowerForm->objectName().isEmpty())
            PowerForm->setObjectName(QString::fromUtf8("PowerForm"));
        PowerForm->resize(800, 450);
        PowerForm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(PowerForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 450));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
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
        btnShutdown = new QPushButton(frame);
        btnShutdown->setObjectName(QString::fromUtf8("btnShutdown"));
        btnShutdown->setGeometry(QRect(90, 130, 220, 80));
        btnShutdown->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btnLogout = new QPushButton(frame);
        btnLogout->setObjectName(QString::fromUtf8("btnLogout"));
        btnLogout->setGeometry(QRect(440, 130, 220, 80));
        btnLogout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 130, 80, 80));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"\n"
""));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(440, 130, 80, 80));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"\n"
""));

        retranslateUi(PowerForm);

        QMetaObject::connectSlotsByName(PowerForm);
    } // setupUi

    void retranslateUi(QWidget *PowerForm)
    {
        PowerForm->setWindowTitle(QCoreApplication::translate("PowerForm", "Form", nullptr));
        btnReturn->setText(QCoreApplication::translate("PowerForm", "\350\277\224\345\233\236", nullptr));
        btnShutdown->setText(QCoreApplication::translate("PowerForm", "\345\205\263\346\234\272", nullptr));
        btnLogout->setText(QCoreApplication::translate("PowerForm", "\346\263\250\351\224\200", nullptr));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PowerForm: public Ui_PowerForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // POWER_H
