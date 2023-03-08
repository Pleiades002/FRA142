#ifndef QUEUE_H
#define QUEUE_H
#include "LinkList.h"

class Queue : public LinkList
{
public:
    Queue();
    ~Queue();
    void enQueue(int newVal);
    int peek();
    int deQueue();
};

#endif