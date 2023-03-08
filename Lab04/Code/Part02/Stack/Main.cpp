#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    Node node00(0, nullptr);
    Node node01(1, nullptr);
    Node node02(2, nullptr);
    Node node03(3, nullptr);
    Stack stack01;

    cout << "<This is Stack>" << endl;
    
    stack01.push(&node00);
    cout << "Peek Addr: " << stack01.peek() << endl;
    cout << "Peek Val: " << stack01.peek()->getVal() << endl;
    cout << "Size: " << stack01.getSize() << endl;
    stack01.printLink();

    stack01.push(&node01);
    stack01.push(&node02);
    stack01.push(&node03);
    cout << "Peek Addr: " << stack01.peek() << endl;
    cout << "Peek Val: " << stack01.peek()->getVal() << endl;
    cout << "Size: " << stack01.getSize() << endl;
    stack01.printLink();

    cout << stack01.pop()->getVal() << endl;
    cout << "Peek Addr: " << stack01.peek() << endl;
    cout << "Peek Val: " << stack01.peek()->getVal() << endl;
    cout << "Size: " << stack01.getSize() << endl;
    stack01.printLink();
    return 0;
}