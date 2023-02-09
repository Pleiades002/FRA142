#include <iostream>
using namespace std;

void valSwap(int *val1, int *val2)
{
    int temp;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp;
    return;
}

int main()
{
    int x = 5;
    int y = 10;
    cout << "Before swap: x = " << x << " y = " << y << endl;
    valSwap(&x, &y);
    cout << "After swap: x = " << x << " y = " << y << endl;
    return 0;
}