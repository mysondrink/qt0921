/********************************************************************************
** Form generated from reading UI file 'set.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SET_H
#define SET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetForm
{
public:
    QFrame *frame;
    QLabel *label;
    QComboBox *modeBox_4;
    QLabel *label_2;
    QPushButton *btnReturn;
    QPushButton *btnConfirm;

    void setupUi(QWidget *SetForm)
    {
        if (SetForm->objectName().isEmpty())
            SetForm->setObjectName(QString::fromUtf8("SetForm"));
        SetForm->resize(800, 450);
        SetForm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(SetForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 450));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 110, 272, 67));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        modeBox_4 = new QComboBox(frame);
        modeBox_4->setObjectName(QString::fromUtf8("modeBox_4"));
        modeBox_4->setGeometry(QRect(390, 110, 230, 70));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(modeBox_4->sizePolicy().hasHeightForWidth());
        modeBox_4->setSizePolicy(sizePolicy);
        modeBox_4->setStyleSheet(QString::fromUtf8("QComboBox::drop-down{\n"
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
        label_2->setGeometry(QRect(0, 0, 191, 61));
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

        retranslateUi(SetForm);

        QMetaObject::connectSlotsByName(SetForm);
    } // setupUi

    void retranslateUi(QWidget *SetForm)
    {
        SetForm->setWindowTitle(QCoreApplication::translate("SetForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("SetForm", "\345\203\217\347\264\240\350\256\276\347\275\256", nullptr));
        label_2->setText(QCoreApplication::translate("SetForm", "\345\233\276\345\203\217\345\203\217\347\264\240\350\256\276\347\275\256", nullptr));
        btnReturn->setText(QCoreApplication::translate("SetForm", "\350\277\224\345\233\236", nullptr));
        btnConfirm->setText(QCoreApplication::translate("SetForm", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetForm: public Ui_SetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SET_H
