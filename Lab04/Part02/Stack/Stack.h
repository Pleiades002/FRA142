#ifndef STACK_H
#define STACK_H
#include "LinkList.h"

class Stack : public LinkList
{
public:
    Stack();
    ~Stack();
    void push(Node *newNode);
    Node *pop();
    Node *peek();
};

#endif