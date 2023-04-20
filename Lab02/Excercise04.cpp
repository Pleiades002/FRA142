#include <iostream>
#include <tuple>
using namespace std;

tuple<int, int> valSwap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    return make_tuple(a, b);
}

int main()
{
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << " y = " << y << endl;
    tie(x, y) = valSwap(x, y);
    cout << "After swap: x = " << x << " y = " << y << endl;
    return 0;
}