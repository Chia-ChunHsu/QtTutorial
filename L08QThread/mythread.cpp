#include "mythread.h"

Thread::Thread()
{
    InitialValue = 0;
}

void Thread::Initial(int initialValue)
{
    InitialValue = initialValue;
}

void Thread::run()
{
    for(int i=InitialValue;i<=100;i++)
    {
        emit send_progress(i);
    }
}
