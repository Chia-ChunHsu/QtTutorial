#include "thread.h"

MyThread::MyThread()
{

}

void MyThread::run()
{
    for(int i=0;i<=100;i++)
    {
        emit send_progress(i);
        msleep(100);
    }
}
