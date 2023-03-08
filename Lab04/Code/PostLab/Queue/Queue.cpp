#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue() : LinkList()
{
}

Queue::~Queue()
{
}

void Queue::enQueue(int newVal)
{
    Node *newNode = new Node(newVal, nullptr);
    insert(newNode, getSize());
}

int Queue::deQueue()
{
    int temp;
    temp = getHead()->getVal();
    remove(0);
    return temp;
}

int Queue::peek()
{
    return getHead()->getVal();
}