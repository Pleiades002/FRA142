#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *pX = &x;
    cout << "X = " << x << endl;
    cout << "&X = " << &x << endl;
    cout << "Change variable value" << endl;
    x = 100;
    cout << "X = " << x << endl;
    cout << "&X = " << &x << endl;
}