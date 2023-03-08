#ifndef LINKLIST_H
#define LINKLIST_H
#include "Node.h"

class LinkList // Capital l
{
protected:
    int size;
    Node *head; // Move to private for security
    Node *curr;
    Node *tail;

public:
    LinkList();
    void insert(Node *newNode, int pos);
    void remove(int pos);
    void printLink();
    void printRow(int row);
    int getSize();
    Node *getHead();
    Node *getTail();
};

#endif