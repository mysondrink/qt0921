/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef HOME_H
#define HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeForm
{
public:
    QFrame *frame;
    QLabel *label_2;
    QPushButton *btnData;
    QLabel *label_4;
    QLabel *label;
    QPushButton *btnSet;
    QPushButton *btnPower;
    QLabel *label_3;
    QPushButton *btnPara;
    QPushButton *btnHistory;

    void setupUi(QWidget *HomeForm)
    {
        if (HomeForm->objectName().isEmpty())
            HomeForm->setObjectName(QString::fromUtf8("HomeForm"));
        HomeForm->resize(800, 450);
        HomeForm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(HomeForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 450));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(410, 100, 80, 80));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"\n"
""));
        btnData = new QPushButton(frame);
        btnData->setObjectName(QString::fromUtf8("btnData"));
        btnData->setGeometry(QRect(100, 100, 280, 80));
        btnData->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"border:4px solid rgb(0,0,0);\n"
"border-radius: 35px;\n"
"background-color:#05abc2;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(410, 220, 80, 80));
        label_4->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"\n"
""));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 100, 80, 80));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";\n"
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
"border-radius: 35px;\n"
"background-color:#05abc2;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        btnPower = new QPushButton(frame);
        btnPower->setObjectName(QString::fromUtf8("btnPower"));
        btnPower->setGeometry(QRect(10, 360, 780, 80));
        btnPower->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color:#05abc2;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 220, 80, 80));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"\n"
""));
        btnPara = new QPushButton(frame);
        btnPara->setObjectName(QString::fromUtf8("btnPara"));
        btnPara->setGeometry(QRect(410, 220, 280, 80));
        btnPara->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"border:4px solid rgb(0,0,0);\n"
"border-radius: 35px;\n"
"background-color:#05abc2;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        btnHistory = new QPushButton(frame);
        btnHistory->setObjectName(QString::fromUtf8("btnHistory"));
        btnHistory->setGeometry(QRect(410, 100, 280, 80));
        btnHistory->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"border:4px solid rgb(0,0,0);\n"
"border-radius: 35px;\n"
"background-color:#05abc2;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        btnData->raise();
        label->raise();
        btnSet->raise();
        btnPower->raise();
        label_3->raise();
        btnHistory->raise();
        btnPara->raise();
        label_4->raise();
        label_2->raise();

        retranslateUi(HomeForm);

        QMetaObject::connectSlotsByName(HomeForm);
    } // setupUi

    void retranslateUi(QWidget *HomeForm)
    {
        HomeForm->setWindowTitle(QCoreApplication::translate("HomeForm", "Form", nullptr));
        label_2->setText(QString());
        btnData->setText(QCoreApplication::translate("HomeForm", "  \350\215\247\345\205\211\346\243\200\347\226\253", nullptr));
        label_4->setText(QString());
        label->setText(QString());
        btnSet->setText(QCoreApplication::translate("HomeForm", "  \346\243\200\347\226\253\350\256\276\347\275\256", nullptr));
        btnPower->setText(QCoreApplication::translate("HomeForm", "\347\224\265\346\272\220", nullptr));
        label_3->setText(QString());
        btnPara->setText(QCoreApplication::translate("HomeForm", "  \347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
        btnHistory->setText(QCoreApplication::translate("HomeForm", "  \345\216\206\345\217\262\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeForm: public Ui_HomeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // HOME_H
