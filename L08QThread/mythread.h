#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
class Thread: public QThread
{
public:
    Thread();
    void Initial(int initialValue);
signals:
    void send_progress(int);
protected:
    void run();
private:
    int InitialValue;
};

#endif // MYTHREAD_H
