#include <iostream>
#include "dLinkList.h"
using namespace std;

// Constructor

dLinkList::dLinkList()
{
    head = nullptr;
    curr = nullptr;
    tail = nullptr;
    size = 0;
}

// Function

int dLinkList::getSize()
{
    return size;
}

void dLinkList::printLink()
{
    if (size != 0)
    {
        cout << "<Forward>" << endl;
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

void dLinkList::printLinkR()
{
    if (size != 0)
    {
        cout << "<Backward>" << endl;
        cout << "Size: " << size << endl;
        cout << "Print link: ";
        Node *tempPtr = tail;
        while (tempPtr != nullptr)
        {
            cout << tempPtr->getVal() << "->";
            tempPtr = tempPtr->getPrev();
        }
        cout << endl;
        cout << "Tail Val: " << tail->getVal() << endl;
        cout << "Head Val: " << head->getVal() << endl;
        cout << "------------------" << endl;
    }
    else
        return;
}

void dLinkList::insert(Node *newNode, int pos)
{
    if (pos >= 0) // Forward insert
    {
        if (pos == 0)
        {
            if (size == 0)
            {
                curr = newNode;
                curr->setNext(nullptr);
                curr->setPrev(nullptr);
                head = curr;
                tail = curr;
                size++;
            }
            else
            {
                curr = newNode;
                curr->setNext(head);
                head->setPrev(curr);
                head = curr;
                head->setPrev(nullptr);
                size++;
            }
        }
        else if (pos == size)
        {
            curr = newNode;
            curr->setNext(nullptr);
            curr->setPrev(tail);
            tail->setNext(curr);
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
                Node *tempPtr = curr->getNext();
                curr->setNext(newNode);
                newNode->setNext(tempPtr);
                tempPtr->setPrev(newNode);
                newNode->setPrev(curr);
                size++;
            }
        }
    }
    else // Backward insert
    {
        if (pos == -1)
        {
            curr = newNode;
            tail->setNext(curr);
            curr->setPrev(tail);
            tail = curr;
            tail->setNext(nullptr);
            size++;
        }
        else if (abs(pos) > size)
        {
            head->setPrev(newNode);
            newNode->setPrev(nullptr);
            newNode->setNext(head);
            head = newNode;
            size++;

        }
        else
        {
            curr = tail;
            for (int i = 1; i < abs(pos) - 1; i++)
            {
                curr = curr->getPrev();
            }
            // cout << curr->getVal() << endl;
            Node *tempPtr = curr->getPrev();
            // cout << tempPtr->getVal() << endl;
            tempPtr->setNext(newNode);
            newNode->setNext(curr);
            curr->setPrev(newNode);
            newNode->setPrev(tempPtr);
            size++;
        }
    }
}

void dLinkList::remove(int pos)
{
    if (size != 0)
    {
        if (pos == 0)
        {
            curr = head;
            head = head->getNext();
            head->setPrev(nullptr);
            curr->setNext(nullptr);
            size--;
        }
        else if (pos == size - 1)
        {
            curr = tail;
            tail = curr->getPrev();
            tail->setNext(nullptr);
            curr->setPrev(nullptr);
            size--;
        }
        else
        {
            curr = head;
            Node *tempPtr = head;
            for (int i = 0; i < pos - 1; i++)
            {
                tempPtr = tempPtr->getNext();
            }
            curr = tempPtr->getNext();
            tempPtr->setNext(curr->getNext());
            curr->getNext()->setPrev(tempPtr);
            curr->setNext(nullptr);
            curr->setPrev(nullptr);
            size--;
        }
    }
    else
        return;
}
