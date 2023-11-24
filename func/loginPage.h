#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginForm; }
QT_END_NAMESPACE

class loginPage : public QWidget
{
    Q_OBJECT

public:
    loginPage(QWidget *parent = nullptr);
    const int screen_top = 30;
    ~loginPage();
private:
    Ui::LoginForm *ui;
private slots:
    void on_loginBtn_clicked();
    void on_registerBtn_clicked();
signals:
    void next_page(QWidget *msg);
};
#endif // LOGINPAGE_H
