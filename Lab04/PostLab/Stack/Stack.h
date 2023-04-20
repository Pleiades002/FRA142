#ifndef STACK_H
#define STACK_H
#include "LinkList.h"

class Stack : public LinkList
{
public:
    Stack();
    ~Stack();
    void push(int val);
    int pop();
    int peek();
};

#endif