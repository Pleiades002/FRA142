#ifndef LINKLIST_H
#define LINKLIST_H
#include "Node.h"

class linkList // Capital l
{
private:
    int size;

public:
    Node *head; // Move to private for security
    Node *curr;
    Node *tail;
    linkList();
    void insert(Node *newNode, int pos);
    void remove(int pos);
    void printLink();
    int getSize();
};

#endif