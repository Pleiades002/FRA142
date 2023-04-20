#include <iostream>
#include "Node.h"
#include "linkList.h"
#include "dLinkList.h"
using namespace std;

int main()
{
    /* Part 1 Node Class
    Node node1(10, nullptr);
    Node node2(20, nullptr);
    cout << node1.getVal() << " " << node1.getNext() << endl;
    cout << node2.getVal() << " " << node2.getNext() << endl;
    cout << "------------------" << endl;
    node1.setNext(&node2);
    cout << node1.getVal() << " " << node1.getNext() << endl;
    cout << node2.getVal() << " " << node2.getNext() << endl;
    cout << node1.getVal() << " " << node1.getNext()->getVal() << endl;
    */

    /* Part 2 Singly Link list
     Node node1(10, nullptr);
     Node node2(20, nullptr);
     Node node3(30, nullptr);
     Node node4(40, nullptr);
     linkList list;
     list.insert(&node1, 0);
     list.insert(&node2, list.getSize());
     list.insert(&node3, list.getSize());
     list.insert(&node4, list.getSize());
     list.printLink();
     list.remove(0);
     list.printLink();
     list.remove(1);
     list.printLink();
     */

    /* Part 3 Doubly Link list*/
    Node node1(10, nullptr);
    Node node2(20, nullptr);
    Node node3(30, nullptr);
    Node node4(40, nullptr);
    Node node5(50, nullptr);
    dLinkList dlist;

    dlist.insert(&node1, 0);
    dlist.insert(&node2, 1);
    dlist.insert(&node3, -1);
    dlist.printLink();
    dlist.printLinkR();

    dlist.insert(&node4, -3);
    dlist.printLink();
    dlist.printLinkR();

    // dlist.insert(&node5,-(dlist.getSize() + 1));
    // dlist.printLink();
    // dlist.printLinkR();
    return 0;
}