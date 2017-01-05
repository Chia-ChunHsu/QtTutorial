#ifndef THREAD_H
#define THREAD_H

#include <QThread>
class MyThread :public QThread
{
    Q_OBJECT
public:
    MyThread();

protected:
    void run();
signals:
    void send_progress(int);

};

#endif // THREAD_H
