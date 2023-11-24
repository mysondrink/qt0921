//
// Created by x on 2023/9/27.
//

#ifndef QT0921_EDITPAGE_H
#define QT0921_EDITPAGE_H
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class EditForm; }
QT_END_NAMESPACE

class editPage : public QWidget{
Q_OBJECT
public:
    editPage(QWidget *parent = nullptr);
    ~editPage();
    const int screen_top = 30;
private:
    Ui::EditForm *ui;
    void resetBtn();
    void resetBtn_2();
private slots:
    void on_btnConfirm_clicked();
    void on_btnReturn_clicked();
    void on_btnAdd_clicked();
    void on_btnDelete_clicked();
    void on_btnModify_clicked();
signals:
    void next_page(QWidget *msg);
};


#endif //QT0921_EDITPAGE_H
