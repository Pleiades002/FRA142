#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
    Node node00(0, nullptr);
    Node node01(1, nullptr);
    Node node02(2, nullptr);
    Node node03(3, nullptr);
    Queue queue;

    cout << "<This is Queue>" << endl;

    queue.enQueue(&node00);
    cout << "Peek Addr: " << queue.peek() << endl;
    cout << "Peek Val: " << queue.peek()->getVal() << endl;
    cout << "Size: " << queue.getSize() << endl;
    queue.printLink();

    queue.enQueue(&node01);
    queue.enQueue(&node02);
    queue.enQueue(&node03);
    cout << "Peek Addr: " << queue.peek() << endl;
    cout << "Peek Val: " << queue.peek()->getVal() << endl;
    cout << "Size: " << queue.getSize() << endl;
    queue.printLink();

    cout << queue.deQueue()->getVal() << endl;
    cout << "Peek Addr: " << queue.peek() << endl;
    cout << "Peek Val: " << queue.peek()->getVal() << endl;
    cout << "Size: " << queue.getSize() << endl;
    queue.printLink();
    return 0;
}