#include <iostream>
#include "Stack.h"
using namespace std;

Stack::Stack() : LinkList()
{
}

Stack::~Stack()
{
}

void Stack::push(int newVal)
{
    Node *newNode = new Node(newVal, nullptr);
    insert(newNode, 0);
}

int Stack::pop()
{
    int temp = getHead()->getVal();
    remove(0);
    return temp;
}

int Stack::peek()
{
    return getHead()->getVal();
}
