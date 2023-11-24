//
// Created by x on 2023/9/27.
//

#ifndef QT0921_HOMEPAGE_H
#define QT0921_HOMEPAGE_H
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class HomeForm; }
QT_END_NAMESPACE

class homePage : public QWidget{
    Q_OBJECT
public:
    homePage(QWidget *parent = nullptr);
    ~homePage();
    const int screen_top = 30;
private:
    Ui::HomeForm *ui;
private slots:
    void on_btnPower_clicked();
    void on_btnData_clicked();
    void on_btnHistory_clicked();
    void on_btnSet_clicked();
    void on_btnPara_clicked();
signals:
    void next_page(QWidget *msg);
};


#endif //QT0921_HOMEPAGE_H
