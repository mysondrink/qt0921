//
// Created by x on 2023/9/27.
//

#ifndef QT0921_TESTPAGE_H
#define QT0921_TESTPAGE_H
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class TestForm; }
QT_END_NAMESPACE

class testPage : public QWidget{
Q_OBJECT
public:
    testPage(QWidget *parent = nullptr);
    ~testPage();
    const int screen_top = 30;
private:
    Ui::TestForm *ui;
    void resetBtn();
private slots:
    void on_btnConfirm_clicked();
    void on_btnReturn_clicked();
    void on_btnSwitch_clicked();
    void on_btnExe_clicked();
    void on_btnPrint_clicked();
signals:
    void next_page(QWidget *msg);
};


#endif //QT0921_TESTPAGE_H
