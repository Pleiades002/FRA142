#ifndef NODE_H
#define NODE_H

class Node
{
private:
    int val;
    Node *next;
    Node *prev;

public:
    Node();
    Node(int newVal = 0, Node *newNext = nullptr);
    void print();
    void setVal(int newVal);
    void setNext(Node *newNext);
    void setPrev(Node *newPrev);
    int getVal();
    Node *getNext();
    Node *getPrev();
};

#endif