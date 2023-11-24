/********************************************************************************
** Form generated from reading UI file 'loading.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef LOADING_H
#define LOADING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadForm
{
public:
    QFrame *topframe;
    QLabel *title_label;
    QLabel *time_label;
    QFrame *centerframe;
    QTextEdit *textEdit;
    QPushButton *btnRetry;
    QLabel *retry_icon_label;

    void setupUi(QWidget *LoadForm)
    {
        if (LoadForm->objectName().isEmpty())
            LoadForm->setObjectName(QString::fromUtf8("LoadForm"));
        LoadForm->resize(800, 480);
        LoadForm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        topframe = new QFrame(LoadForm);
        topframe->setObjectName(QString::fromUtf8("topframe"));
        topframe->setGeometry(QRect(0, 0, 800, 30));
        topframe->setFrameShape(QFrame::StyledPanel);
        topframe->setFrameShadow(QFrame::Raised);
        title_label = new QLabel(topframe);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(0, 0, 200, 30));
        time_label = new QLabel(topframe);
        time_label->setObjectName(QString::fromUtf8("time_label"));
        time_label->setGeometry(QRect(600, 0, 200, 30));
        centerframe = new QFrame(LoadForm);
        centerframe->setObjectName(QString::fromUtf8("centerframe"));
        centerframe->setGeometry(QRect(0, 30, 800, 450));
        centerframe->setFrameShape(QFrame::StyledPanel);
        centerframe->setFrameShadow(QFrame::Raised);
        textEdit = new QTextEdit(centerframe);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(70, 30, 680, 291));
        textEdit->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        btnRetry = new QPushButton(centerframe);
        btnRetry->setObjectName(QString::fromUtf8("btnRetry"));
        btnRetry->setGeometry(QRect(570, 330, 220, 80));
        btnRetry->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        retry_icon_label = new QLabel(centerframe);
        retry_icon_label->setObjectName(QString::fromUtf8("retry_icon_label"));
        retry_icon_label->setGeometry(QRect(570, 330, 80, 80));
        retry_icon_label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"\n"
""));

        retranslateUi(LoadForm);

        QMetaObject::connectSlotsByName(LoadForm);
    } // setupUi

    void retranslateUi(QWidget *LoadForm)
    {
        LoadForm->setWindowTitle(QCoreApplication::translate("LoadForm", "Form", nullptr));
        title_label->setText(QCoreApplication::translate("LoadForm", "TextLabel", nullptr));
        time_label->setText(QCoreApplication::translate("LoadForm", "TextLabel", nullptr));
        btnRetry->setText(QCoreApplication::translate("LoadForm", "\351\207\215\350\257\225", nullptr));
        retry_icon_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoadForm: public Ui_LoadForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LOADING_H
