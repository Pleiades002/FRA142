#include <iostream>
#include "Node.h"
using namespace std;

Node::Node()
{
    value = 0;
    next = NULL;
}

Node::Node(int newValue, Node *newNext)
{
    value = newValue;
    next = newNext;
}

void Node::print()
{
    cout << value << endl;
}

int Node::getValue()
{
    return value;
}

void Node::setValue(int newValue)
{
    value = newValue;
}

void Node::setNext(Node *newNext)
{
    next = newNext;
}

Node *Node::getNext()
{
    return next;
}
