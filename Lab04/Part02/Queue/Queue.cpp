#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue() : LinkList()
{
}

Queue::~Queue()
{
}

void Queue::enQueue(Node *newNode)
{
    insert(newNode, getSize());
}

Node *Queue::deQueue()
{
    Node *temp;
    temp = getHead();
    remove(0);
    return temp;
}

Node *Queue::peek()
{
    return getHead();
}