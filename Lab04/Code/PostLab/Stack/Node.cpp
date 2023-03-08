#include <iostream>
#include "Node.h"
using namespace std;

// Constructor

Node::Node() // Default Constructor
{
    val = 0;
    next = nullptr;
}

Node::Node(int newVal, Node *newNext) // Parameter Constructor
{
    val = newVal;
    next = newNext;
}

// Function

void Node::print()
{
    cout << val << " " << next << endl;
}

// Setter

void Node::setVal(int newVal)
{
    val = newVal;
}

void Node::setNext(Node *newNext)
{
    next = newNext;
}

void Node::setPrev(Node *newPrev)
{
    prev = newPrev;
}

// Getter

int Node::getVal()
{
    return val;
}

Node *Node::getNext()
{
    return next;
}

Node *Node::getPrev()
{
    return prev;
}