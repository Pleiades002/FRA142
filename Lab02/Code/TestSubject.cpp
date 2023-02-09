#include <iostream>
using namespace std;
int test(int *pX, int size)
{
    cout << pX[2];
    return 0;
}

int main()
{
    int x[] = {1, 2, 3, 4};
    test(x, size(x));
    return 0;
}