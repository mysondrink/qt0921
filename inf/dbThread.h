//
// Created by ZHOUHONG on 2023/9/26.
//

#ifndef QT0921_DBTHREAD_H
#define QT0921_DBTHREAD_H
#include <QThread>
#include <QMetaType>

class dbThread : public QThread {
Q_OBJECT
public:
    dbThread();
    struct JSON{
        QString info;
        int code;
        QThread *status;
    };
    JSON dict;
protected:
    const int time_to_sleep = 2;
    const int failed_code = 404;
    const int succeed_code = 202;
signals:
    void finished();
    void update_json(JSON dict);
public slots:
    void run();
};

#endif //QT0921_DBTHREAD_H
