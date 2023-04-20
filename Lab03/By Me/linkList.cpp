#include <iostream>
#include "linkList.h"
using namespace std;

// Constructor

linkList::linkList()
{
    this->head = nullptr;
    curr = nullptr;
    tail = nullptr;
    size = 0;
}

// Function

int linkList::getSize()
{
    return size;
}

void linkList::printLink()
{
    if (size != 0)
    {
        cout << "Forward" << endl;
        cout << "Size: " << size << endl;
        cout << "Print link: ";
        Node *tempPtr = head;
        while (tempPtr != nullptr)
        {
            cout << tempPtr->getVal() << "->";
            tempPtr = tempPtr->getNext();
        }
        cout << endl;
        cout << "Head Val: " << head->getVal() << endl;
        cout << "Tail Val: " << tail->getVal() << endl;
        cout << "------------------" << endl;
    }
    else
        return;
}

void linkList::insert(Node *newNode, int pos)
{
    if (pos == 0) // Insert head
    {
        if (size == 0)
        {
            head = newNode;
            tail = newNode;
            size++;
        }
        else
        {
            curr = newNode;
            curr->setNext(this->head);
            head = curr;
            size++;
        }
    }
    else if (pos == size) // Insert after tail
    {
        tail->setNext(newNode);
        tail = newNode;
        size++;
    }
    else
    {
        if (pos < size)
        {
            curr = head;
            for (int i = 0; i < pos - 1; i++)
            {
                curr = curr->getNext();
            }
            newNode->setNext(curr->getNext());
            curr->setNext(newNode);
            size++;
        }
    }
}

void linkList::remove(int pos)
{
    if (size != 0)
    {
        if (pos == 0)
        {
            head = head->getNext();
            size--;
        }
        else if (pos == size - 1)
        {
            curr = head;
            for (int i = 0; i < pos - 1; i++)
            {
                curr = curr->getNext();
            }
            curr->setNext(nullptr);
            tail = curr;
            size--;
        }
        else
        {
            curr = head;
            for (int i = 0; i < pos - 1; i++)
            {
                curr = curr->getNext();
            }
            curr->setNext(curr->getNext()->getNext());
            size--;
        }
    }
    else
        return;
}