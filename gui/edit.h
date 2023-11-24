/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef EDIT_H
#define EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditForm
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *delete_icon_label;
    QPushButton *btnAdd;
    QPushButton *btnModify;
    QLabel *label;
    QLabel *add_icon_label;
    QPushButton *btnDelete;
    QLabel *edit_icon_label;
    QWidget *page2;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *nameLine;
    QComboBox *colCb;
    QComboBox *rowCb;
    QLabel *label_2;
    QWidget *page3;
    QLabel *label_6;
    QComboBox *deleteCb;
    QLabel *label_7;
    QWidget *page4;
    QComboBox *editCb;
    QLabel *label_9;
    QLabel *label_8;
    QWidget *page5;
    QTableView *reagentTable;
    QFrame *frame;
    QPushButton *btnConfirm;
    QPushButton *btnReturn;

    void setupUi(QWidget *EditForm)
    {
        if (EditForm->objectName().isEmpty())
            EditForm->setObjectName(QString::fromUtf8("EditForm"));
        EditForm->resize(800, 450);
        EditForm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        stackedWidget = new QStackedWidget(EditForm);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 350));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        delete_icon_label = new QLabel(page);
        delete_icon_label->setObjectName(QString::fromUtf8("delete_icon_label"));
        delete_icon_label->setGeometry(QRect(310, 130, 80, 80));
        delete_icon_label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"\n"
""));
        btnAdd = new QPushButton(page);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setGeometry(QRect(310, 30, 220, 80));
        btnAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btnModify = new QPushButton(page);
        btnModify->setObjectName(QString::fromUtf8("btnModify"));
        btnModify->setGeometry(QRect(310, 230, 220, 80));
        btnModify->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 121, 51));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        add_icon_label = new QLabel(page);
        add_icon_label->setObjectName(QString::fromUtf8("add_icon_label"));
        add_icon_label->setGeometry(QRect(310, 30, 80, 80));
        add_icon_label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"\n"
""));
        btnDelete = new QPushButton(page);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setGeometry(QRect(310, 130, 220, 80));
        btnDelete->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        edit_icon_label = new QLabel(page);
        edit_icon_label->setObjectName(QString::fromUtf8("edit_icon_label"));
        edit_icon_label->setGeometry(QRect(310, 230, 80, 80));
        edit_icon_label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px;\n"
"\n"
""));
        stackedWidget->addWidget(page);
        btnAdd->raise();
        btnModify->raise();
        label->raise();
        add_icon_label->raise();
        btnDelete->raise();
        edit_icon_label->raise();
        delete_icon_label->raise();
        page2 = new QWidget();
        page2->setObjectName(QString::fromUtf8("page2"));
        label_5 = new QLabel(page2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 0, 378, 27));
        label_5->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        label_4 = new QLabel(page2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 190, 151, 44));
        label_4->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        label_3 = new QLabel(page2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 110, 151, 44));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        nameLine = new QLineEdit(page2);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));
        nameLine->setGeometry(QRect(390, 30, 230, 70));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameLine->sizePolicy().hasHeightForWidth());
        nameLine->setSizePolicy(sizePolicy);
        nameLine->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));
        colCb = new QComboBox(page2);
        colCb->setObjectName(QString::fromUtf8("colCb"));
        colCb->setGeometry(QRect(390, 190, 230, 70));
        colCb->setStyleSheet(QString::fromUtf8("QComboBox::drop-down{\n"
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
        rowCb = new QComboBox(page2);
        rowCb->setObjectName(QString::fromUtf8("rowCb"));
        rowCb->setGeometry(QRect(390, 110, 230, 70));
        rowCb->setStyleSheet(QString::fromUtf8("QComboBox::drop-down{\n"
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
        label_2 = new QLabel(page2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 40, 211, 44));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        stackedWidget->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName(QString::fromUtf8("page3"));
        label_6 = new QLabel(page3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 0, 161, 47));
        label_6->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        deleteCb = new QComboBox(page3);
        deleteCb->setObjectName(QString::fromUtf8("deleteCb"));
        deleteCb->setGeometry(QRect(380, 140, 230, 70));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(deleteCb->sizePolicy().hasHeightForWidth());
        deleteCb->setSizePolicy(sizePolicy1);
        deleteCb->setStyleSheet(QString::fromUtf8("QComboBox::drop-down{\n"
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
        label_7 = new QLabel(page3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(140, 140, 181, 71));
        label_7->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        stackedWidget->addWidget(page3);
        page4 = new QWidget();
        page4->setObjectName(QString::fromUtf8("page4"));
        editCb = new QComboBox(page4);
        editCb->setObjectName(QString::fromUtf8("editCb"));
        editCb->setGeometry(QRect(340, 110, 230, 70));
        sizePolicy1.setHeightForWidth(editCb->sizePolicy().hasHeightForWidth());
        editCb->setSizePolicy(sizePolicy1);
        editCb->setStyleSheet(QString::fromUtf8("QComboBox::drop-down{\n"
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
        label_9 = new QLabel(page4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(90, 110, 180, 70));
        label_9->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        label_8 = new QLabel(page4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 0, 161, 47));
        label_8->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        stackedWidget->addWidget(page4);
        page5 = new QWidget();
        page5->setObjectName(QString::fromUtf8("page5"));
        reagentTable = new QTableView(page5);
        reagentTable->setObjectName(QString::fromUtf8("reagentTable"));
        reagentTable->setGeometry(QRect(10, 10, 781, 334));
        reagentTable->setStyleSheet(QString::fromUtf8("#reagentTable\n"
"{	\n"
"font: 20pt \"\345\256\213\344\275\223\";\n"
"border:4px solid rgb(0,0,0);\n"
"background-color:rgb(255,255,255);\n"
"}\n"
"\n"
"QComboBox {\n"
"   font: 20pt \"\345\256\213\344\275\223\";\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"	background-color: rgb(0, 0, 0);/*\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"    padding: 1px 2px 1px 2px;  /*\351\222\210\345\257\271\344\272\216\347\273\204\345\220\210\346\241\206\344\270\255\347\232\204\346\226\207\346\234\254\345\206\205\345\256\271*/\n"
"	color: rgb(255,255,255)\n"
"}"));
        stackedWidget->addWidget(page5);
        frame = new QFrame(EditForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 350, 800, 100));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btnConfirm = new QPushButton(frame);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));
        btnConfirm->setGeometry(QRect(10, 10, 380, 80));
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
        btnReturn->setGeometry(QRect(410, 10, 380, 80));
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

        retranslateUi(EditForm);

        QMetaObject::connectSlotsByName(EditForm);
    } // setupUi

    void retranslateUi(QWidget *EditForm)
    {
        EditForm->setWindowTitle(QCoreApplication::translate("EditForm", "Form", nullptr));
        delete_icon_label->setText(QString());
        btnAdd->setText(QCoreApplication::translate("EditForm", "  \346\267\273\345\212\240", nullptr));
        btnModify->setText(QCoreApplication::translate("EditForm", "  \344\277\256\346\224\271", nullptr));
        label->setText(QCoreApplication::translate("EditForm", "\346\243\200\347\226\253\350\256\276\347\275\256", nullptr));
        add_icon_label->setText(QString());
        btnDelete->setText(QCoreApplication::translate("EditForm", "  \345\210\240\351\231\244", nullptr));
        edit_icon_label->setText(QString());
        label_5->setText(QCoreApplication::translate("EditForm", "\346\267\273\345\212\240\350\257\225\345\211\202\345\215\241", nullptr));
        label_4->setText(QCoreApplication::translate("EditForm", "\345\210\227", nullptr));
        label_3->setText(QCoreApplication::translate("EditForm", "\350\241\214", nullptr));
        label_2->setText(QCoreApplication::translate("EditForm", "\350\257\225\345\211\202\345\215\241\345\236\213\345\217\267", nullptr));
        label_6->setText(QCoreApplication::translate("EditForm", "\345\210\240\351\231\244\350\257\225\345\211\202\345\215\241", nullptr));
        label_7->setText(QCoreApplication::translate("EditForm", "\350\257\225\345\211\202\345\215\241\345\236\213\345\217\267", nullptr));
        label_9->setText(QCoreApplication::translate("EditForm", "\350\257\225\345\211\202\345\215\241\345\236\213\345\217\267", nullptr));
        label_8->setText(QCoreApplication::translate("EditForm", "\344\277\256\346\224\271\350\257\225\345\211\202\345\215\241", nullptr));
        btnConfirm->setText(QCoreApplication::translate("EditForm", "\347\241\256\350\256\244", nullptr));
        btnReturn->setText(QCoreApplication::translate("EditForm", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditForm: public Ui_EditForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // EDIT_H
