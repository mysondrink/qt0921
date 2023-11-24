//
// Created by x on 2023/9/27.
//

#ifndef QT0921_POWERPAGE_H
#define QT0921_POWERPAGE_H
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui{ class PowerForm; }
QT_END_NAMESPACE

class powerPage : public QWidget{
    Q_OBJECT
public:
    powerPage(QWidget *parent = nullptr);
    const int screen_top = 30;
    ~powerPage();
private:
    Ui::PowerForm *ui;
private slots:
    void on_btnReturn_clicked();
    void on_btnLogout_clicked();
signals:
    void next_page(QWidget *msg);
};


#endif //QT0921_POWERPAGE_H
