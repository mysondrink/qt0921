//
// Created by x on 2023/9/27.
//

#ifndef QT0921_CLEARPAGE_H
#define QT0921_CLEARPAGE_H
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class ClearForm; }
QT_END_NAMESPACE

class clearPage : public QWidget{
Q_OBJECT
public:
    clearPage(QWidget *parent = nullptr);
    ~clearPage();
    const int screen_top = 30;
private:
    Ui::ClearForm *ui;
private slots:
    void on_btnConfirm_clicked();
    void on_btnReturn_clicked();
signals:
    void next_page(QWidget *msg);
};


#endif //QT0921_CLEARPAGE_H
