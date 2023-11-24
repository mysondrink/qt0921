/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef ABOUT_H
#define ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutForm
{
public:
    QFrame *frame;
    QLabel *label_36;
    QLabel *label_35;
    QLabel *label_3;
    QPushButton *btnReturn;
    QPushButton *btnConfirm;

    void setupUi(QWidget *AboutForm)
    {
        if (AboutForm->objectName().isEmpty())
            AboutForm->setObjectName(QString::fromUtf8("AboutForm"));
        AboutForm->resize(800, 450);
        AboutForm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(AboutForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 450));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_36 = new QLabel(frame);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(350, 155, 311, 91));
        label_36->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        label_35 = new QLabel(frame);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(200, 170, 121, 61));
        label_35->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 121, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
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

        retranslateUi(AboutForm);

        QMetaObject::connectSlotsByName(AboutForm);
    } // setupUi

    void retranslateUi(QWidget *AboutForm)
    {
        AboutForm->setWindowTitle(QCoreApplication::translate("AboutForm", "Form", nullptr));
        label_36->setText(QCoreApplication::translate("AboutForm", "\350\215\247\345\205\211\345\210\244\350\257\273\344\273\252 C10-1001", nullptr));
        label_35->setText(QCoreApplication::translate("AboutForm", "\344\273\252\345\231\250\345\236\213\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("AboutForm", "\345\205\263\344\272\216\344\273\252\345\231\250", nullptr));
        btnReturn->setText(QCoreApplication::translate("AboutForm", "\350\277\224\345\233\236", nullptr));
        btnConfirm->setText(QCoreApplication::translate("AboutForm", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutForm: public Ui_AboutForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ABOUT_H
