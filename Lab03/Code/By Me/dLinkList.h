#ifndef DLINKLIST_H
#define DLINKLIST_H
#include "Node.h"

class dLinkList
{
private:
    int size;

public:
    Node *head;
    Node *curr;
    Node *tail;
    dLinkList();
    void insert(Node *newNode, int pos);
    void remove(int pos);
    void printLink();
    void printLinkR();
    int getSize();
};

#endif