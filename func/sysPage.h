//
// Created by x on 2023/9/27.
//

#ifndef QT0921_SYSPAGE_H
#define QT0921_SYSPAGE_H
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class SysForm; }
QT_END_NAMESPACE

class sysPage : public QWidget{
    Q_OBJECT
public:
    sysPage(QWidget *parent = nullptr);
    ~sysPage();
    const int screen_top = 30;
private:
    Ui::SysForm *ui;
private slots:
    void on_btnClear_clicked();
    void on_btnWifi_clicked();
    void on_btnSet_clicked();
    void on_btnAbout_clicked();
    void on_btnReturn_clicked();
signals:
    void next_page(QWidget *msg);
};


#endif //QT0921_SYSPAGE_H
