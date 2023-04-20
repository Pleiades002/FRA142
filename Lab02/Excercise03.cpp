#include <iostream>
using namespace std;

void callByValue(int _var)
{
    _var = 100;
}

void callByReference(int *p_var)
{
    *p_var = 200;
}

int main()
{
    int x = 1;
    int y = 2;
    cout << x << endl;
    cout << y << endl;
    callByValue(x);
    callByReference(&y);
    cout << x << endl;
    cout << y << endl;
    return 0;
}