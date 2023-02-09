#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *pX = &x;
    cout << "X = " << x << endl;
    cout << "&X = " << &x << endl;
    cout << "*pX = " << *pX << endl;
    cout << "pX = " << pX << endl;
    cout << "&pX = " << &pX << endl;
    cout << "Change Pointer Value" << endl;
    *pX = 100;
    cout << "X = " << x << endl;
    cout << "&X = " << &x << endl;
    cout << "*pX = " << *pX << endl;
    cout << "pX = " << pX << endl;
    cout << "&pX = " << &pX << endl;
}