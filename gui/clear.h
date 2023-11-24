/********************************************************************************
** Form generated from reading UI file 'clear.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CLEAR_H
#define CLEAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClearForm
{
public:
    QFrame *frame;
    QLabel *label;
    QProgressBar *clearBar;
    QComboBox *clearCb;
    QLabel *label_2;
    QPushButton *btnReturn;
    QPushButton *btnConfirm;

    void setupUi(QWidget *ClearForm)
    {
        if (ClearForm->objectName().isEmpty())
            ClearForm->setObjectName(QString::fromUtf8("ClearForm"));
        ClearForm->resize(800, 450);
        ClearForm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(ClearForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 450));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 240, 272, 67));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        clearBar = new QProgressBar(frame);
        clearBar->setObjectName(QString::fromUtf8("clearBar"));
        clearBar->setGeometry(QRect(130, 70, 611, 131));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(clearBar->sizePolicy().hasHeightForWidth());
        clearBar->setSizePolicy(sizePolicy);
        clearBar->setStyleSheet(QString::fromUtf8("font: 50pt \"\345\271\274\345\234\206\";\n"
""));
        clearBar->setValue(24);
        clearCb = new QComboBox(frame);
        clearCb->setObjectName(QString::fromUtf8("clearCb"));
        clearCb->setGeometry(QRect(460, 240, 230, 70));
        sizePolicy.setHeightForWidth(clearCb->sizePolicy().hasHeightForWidth());
        clearCb->setSizePolicy(sizePolicy);
        clearCb->setStyleSheet(QString::fromUtf8("QComboBox::drop-down{\n"
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
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 121, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
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

        retranslateUi(ClearForm);

        QMetaObject::connectSlotsByName(ClearForm);
    } // setupUi

    void retranslateUi(QWidget *ClearForm)
    {
        ClearForm->setWindowTitle(QCoreApplication::translate("ClearForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("ClearForm", "\345\216\206\345\217\262\350\256\260\345\275\225", nullptr));
        label_2->setText(QCoreApplication::translate("ClearForm", "\346\270\205\351\231\244\347\274\223\345\255\230", nullptr));
        btnReturn->setText(QCoreApplication::translate("ClearForm", "\350\277\224\345\233\236", nullptr));
        btnConfirm->setText(QCoreApplication::translate("ClearForm", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClearForm: public Ui_ClearForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CLEAR_H
