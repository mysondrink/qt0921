//
// Created by x on 2023/9/27.
//

#ifndef QT0921_HISTORYPAGE_H
#define QT0921_HISTORYPAGE_H
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class HistoryForm; }
QT_END_NAMESPACE

class historyPage : public QWidget{
Q_OBJECT
public:
    historyPage(QWidget *parent = nullptr);
    ~historyPage();
    const int screen_top = 30;
private:
    Ui::HistoryForm *ui;
    void resetBtn_3();
    void resetBtn_2();
    void resetBtn();
private slots:
    void on_btnConfirm_clicked();
    void on_btnReturn_clicked();
    void on_btnPre_clicked();
    void on_btnNext_clicked();
    void on_btnDetail_clicked();
    void on_btnPrint_clicked();
    void on_btnReport_clicked();
signals:
    void next_page(QWidget *msg);
};


#endif //QT0921_HISTORYPAGE_H
