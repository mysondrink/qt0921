//
// Created by x on 2023/9/27.
//

#ifndef QT0921_SETPAGE_H
#define QT0921_SETPAGE_H
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class SetForm; }
QT_END_NAMESPACE

class setPage : public QWidget{
Q_OBJECT
public:
    setPage(QWidget *parent = nullptr);
    ~setPage();
    const int screen_top = 30;
private:
    Ui::SetForm *ui;
private slots:
    void on_btnConfirm_clicked();
    void on_btnReturn_clicked();
signals:
    void next_page(QWidget *msg);
};


#endif //QT0921_SETPAGE_H
