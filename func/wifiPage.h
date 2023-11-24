//
// Created by x on 2023/9/27.
//

#ifndef QT0921_WIFIPAGE_H
#define QT0921_WIFIPAGE_H
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class WifiForm; }
QT_END_NAMESPACE

class wifiPage : public QWidget{
    Q_OBJECT
public:
    wifiPage(QWidget *parent = nullptr);
    ~wifiPage();
    const int screen_top = 30;
private:
    Ui::WifiForm *ui;
private slots:
    void on_btnConfirm_clicked();
    void on_btnReturn_clicked();
signals:
    void next_page(QWidget *msg);
};


#endif //QT0921_WIFIPAGE_H
