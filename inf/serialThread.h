//
// Created by x on 2023/9/26.
//

#ifndef QT0921_SERIALTHREAD_H
#define QT0921_SERIALTHREAD_H
#include <QThread>
#include <QMetaType>

class serialThread : public QThread {
    Q_OBJECT
public:
    serialThread();
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


#endif //QT0921_SERIALTHREAD_H
