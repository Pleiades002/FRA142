#include <iostream>
#include "Node.h"
#include "linkedList.h"
using namespace std;

int main()
{
    Node Node1;
    Node Node2;
    Node Node3;
    Node Node4;
    linkedList link1;
    Node1.setValue(10);
    Node2.setValue(20);
    Node3.setValue(30);
    Node4.setValue(40);
    link1.insert(&Node1, 0);
    link1.insert(&Node2, 0);
    link1.insert(&Node3, 2);
    link1.insert(&Node4, 0);
    
    link1.curr = link1.head;

    while (link1.curr != NULL)
    {
        cout << link1.curr->getValue() << endl;
        link1.curr = link1.curr->getNext();
    }
    link1.remove(1);
    cout << "----------------------" << endl;
    link1.curr = link1.head;
    while (link1.curr != NULL){
        cout << link1.curr->getValue() << endl;
        link1.curr = link1.curr->getNext();
    }
    /*
    Node1.setNext(&Node2);
    Node2.setNext(&Node3);
    Node *temp = Node1.getNext();
    cout << Node1.getValue() << endl;
    cout << Node1.getNext()->getValue() << endl;
    cout << Node1.getNext()->getNext()->getValue() << endl;
    */

    return 0;
}