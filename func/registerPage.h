//
// Created by x on 2023/9/27.
//

#ifndef QT0921_REGISTERPAGE_H
#define QT0921_REGISTERPAGE_H
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class RegisterForm; }
QT_END_NAMESPACE

class registerPage : public QWidget {
    Q_OBJECT
public:
    registerPage(QWidget *parent = nullptr);
    ~registerPage();
    const int screen_top = 30;
private:
    Ui::RegisterForm *ui;
private slots:
    void on_btnConfirm_clicked();
    void on_btnReturn_clicked();
signals:
    void next_page(QWidget *msg);
};


#endif //QT0921_REGISTERPAGE_H
