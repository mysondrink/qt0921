/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef REGISTER_H
#define REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterForm
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *nameLine;
    QLineEdit *pwdLine;
    QLineEdit *pwdLine_2;
    QPushButton *btnConfirm;
    QPushButton *btnReturn;

    void setupUi(QWidget *RegisterForm)
    {
        if (RegisterForm->objectName().isEmpty())
            RegisterForm->setObjectName(QString::fromUtf8("RegisterForm"));
        RegisterForm->resize(800, 450);
        RegisterForm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(RegisterForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 450));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 120, 50));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 80, 121, 67));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 170, 121, 67));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 250, 121, 67));
        label_4->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        nameLine = new QLineEdit(frame);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));
        nameLine->setGeometry(QRect(400, 70, 230, 70));
        nameLine->setStyleSheet(QString::fromUtf8("\n"
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
        pwdLine = new QLineEdit(frame);
        pwdLine->setObjectName(QString::fromUtf8("pwdLine"));
        pwdLine->setGeometry(QRect(400, 160, 230, 70));
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
        pwdLine_2 = new QLineEdit(frame);
        pwdLine_2->setObjectName(QString::fromUtf8("pwdLine_2"));
        pwdLine_2->setGeometry(QRect(400, 250, 230, 70));
        pwdLine_2->setStyleSheet(QString::fromUtf8("\n"
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

        retranslateUi(RegisterForm);

        QMetaObject::connectSlotsByName(RegisterForm);
    } // setupUi

    void retranslateUi(QWidget *RegisterForm)
    {
        RegisterForm->setWindowTitle(QCoreApplication::translate("RegisterForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("RegisterForm", "\346\263\250\345\206\214\347\224\250\346\210\267", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterForm", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterForm", "\346\226\260\345\257\206\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterForm", "\345\206\215\346\254\241\350\276\223\345\205\245", nullptr));
        btnConfirm->setText(QCoreApplication::translate("RegisterForm", "\347\241\256\350\256\244", nullptr));
        btnReturn->setText(QCoreApplication::translate("RegisterForm", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterForm: public Ui_RegisterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // REGISTER_H
