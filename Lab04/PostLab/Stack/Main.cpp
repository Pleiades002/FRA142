#include <iostream>
#include "Stack.h"
using namespace std;

int series[] = {0, 1, 2, 3, 0, 4, 5};
int main()
{
    Stack stack01;

    // for (int i : series)
    // {
    //     cout << i << endl;
    //     if (i != 0)
    //     {
    //         stack01.push(i);
    //     }
    //     else
    //     {
    //         int temp =  stack01.pop()->getVal();
    //         stack01.push(i);
    //         stack01.push(temp);
    //     }
    // }
    for (int i = 0; i < size(series); i++)
    {
        if (i == 0)
        {
            stack01.push(series[i]);
        }
        else if (i != 0 and series[i] != 0)
        {
            stack01.push(series[i]);
        }
        else if (i != 0 and series[i] == 0)
        {
            int temp = stack01.pop();
            stack01.push(series[i]);
            stack01.push(temp);
        }
    }
    stack01.printLink();
    return 0;
}