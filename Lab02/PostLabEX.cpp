#include <iostream>
using namespace std;

void copyArray(int *pArr1, int *pArr2, int *pSum, int _arrSize)
{
    cout << "initialize Copy" << endl;
    for (int i = 0; i < _arrSize; i++)
    {
        cout << pArr1 + i << endl;
        *(pArr2 + i) = *(pArr1 + i);
        *pSum += *(pArr1 + i);
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arrSize = size(arr1);
    int arr2[arrSize];
    int sum = 0;
    for (int i : arr2)
        cout << i << " ";
    cout << endl;
    copyArray(arr1, arr2, &sum, arrSize);
    for (int i : arr2)
        cout << i << " ";
    cout << sum;
}