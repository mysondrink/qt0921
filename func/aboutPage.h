//
// Created by x on 2023/9/27.
//

#ifndef QT0921_ABOUTPAGE_H
#define QT0921_ABOUTPAGE_H
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class AboutForm; }
QT_END_NAMESPACE

class aboutPage : public QWidget{
Q_OBJECT
public:
    aboutPage(QWidget *parent = nullptr);
    ~aboutPage();
    const int screen_top = 30;
private:
    Ui::AboutForm *ui;
private slots:
    void on_btnConfirm_clicked();
    void on_btnReturn_clicked();
signals:
    void next_page(QWidget *msg);
};


#endif //QT0921_ABOUTPAGE_H
