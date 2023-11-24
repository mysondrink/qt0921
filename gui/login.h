/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef LOGIN_H
#define LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QFrame *frame;
    QFrame *frame_3;
    QPushButton *registerBtn;
    QPushButton *loginBtn;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *nameLine;
    QLineEdit *numLine;
    QLabel *register_icon_label;
    QLabel *login_icon_label;

    void setupUi(QWidget *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName(QString::fromUtf8("LoginForm"));
        LoginForm->resize(800, 450);
        LoginForm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(LoginForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 450));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 800, 450));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        registerBtn = new QPushButton(frame_3);
        registerBtn->setObjectName(QString::fromUtf8("registerBtn"));
        registerBtn->setGeometry(QRect(150, 280, 220, 80));
        registerBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        loginBtn = new QPushButton(frame_3);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(500, 280, 220, 80));
        loginBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label = new QLabel(frame_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 80, 230, 70));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 160, 230, 70));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        nameLine = new QLineEdit(frame_3);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));
        nameLine->setGeometry(QRect(360, 80, 230, 70));
        nameLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"color: rgb(255,255,255);\n"
"background-color:rgba(0,0,0,255);\n"
"border:none;\n"
"border-bottom:2px solid rgba(0,0,0,255);\n"
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
        numLine = new QLineEdit(frame_3);
        numLine->setObjectName(QString::fromUtf8("numLine"));
        numLine->setGeometry(QRect(360, 160, 230, 70));
        numLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"color: rgb(255,255,255);\n"
"background-color:rgba(0,0,0,255);\n"
"border:none;\n"
"border-bottom:2px solid rgba(0,0,0,255);\n"
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
        register_icon_label = new QLabel(frame_3);
        register_icon_label->setObjectName(QString::fromUtf8("register_icon_label"));
        register_icon_label->setGeometry(QRect(150, 280, 80, 80));
        register_icon_label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"\n"
""));
        login_icon_label = new QLabel(frame_3);
        login_icon_label->setObjectName(QString::fromUtf8("login_icon_label"));
        login_icon_label->setGeometry(QRect(500, 280, 80, 80));
        login_icon_label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"\n"
""));

        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QWidget *LoginForm)
    {
        LoginForm->setWindowTitle(QCoreApplication::translate("LoginForm", "Form", nullptr));
        registerBtn->setText(QCoreApplication::translate("LoginForm", "\346\263\250\345\206\214", nullptr));
        loginBtn->setText(QCoreApplication::translate("LoginForm", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("LoginForm", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("LoginForm", "\345\257\206\347\240\201", nullptr));
        register_icon_label->setText(QString());
        login_icon_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LOGIN_H
