#ifndef LOADPAGE_H
#define LOADPAGE_H

#include <QWidget>
#include <QThread>
#include <QVBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui { class LoadForm; }
QT_END_NAMESPACE

class loadPage : public QWidget
{
Q_OBJECT

public:
    loadPage(QWidget *parent = nullptr);
    int getFlagNum();
    void setFlagNum(int num);
    struct JSON{
        QString info;
        int code;
        QThread *status;
    };
    QList<QThread *> thread_list;
    QWidget *cur_page;
    QVBoxLayout *v;
    ~loadPage();
private:
    Ui::LoadForm *ui;
    QWidget *curPage;
    int flag_num = 0;
    const int failed_code = 404;
    const int succeed_code = 202;
    void InitUI();
    void startThread();
    void statusShowTime();
    void showCurrentTime();
    void retryThread();
private slots:
    void on_btnRetry_clicked();
    void setInfoLabel(JSON msg);
    void showPage();
    void changePage(QWidget *msg);
};
#endif // WIDGET_H
