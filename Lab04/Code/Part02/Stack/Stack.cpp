#include <iostream>
#include "Stack.h"
using namespace std;

Stack::Stack() : LinkList()
{
}

Stack::~Stack()
{
}

void Stack::push(Node *newNode)
{
    insert(newNode, 0);
}

Node *Stack::pop()
{
    Node *temp;
    temp = getHead();
    remove(0);
    return temp;
}

Node *Stack::peek()
{
    return getHead();
}
