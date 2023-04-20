#include <iostream>
#include "Queue.h"
using namespace std;

int input[] = {5, 6, 8, 9, 2, 7, 1};
int main()
{
    Queue row1;
    Queue row2;
    Queue row3;
    for (int i : input)
    {
        row1.enQueue(i);
    }
    int time = row1.getSize();
    for (int i = 0; i < time; i++)
    {
        cout << "Round: " << i << endl;
        row1.printRow(1);
        row2.printRow(2);
        row3.printRow(3);
        cout << "------------------" << endl;
        if (row1.peek() % 2 == 0)
        {
            row2.enQueue(row1.peek());
            row1.deQueue();
        }
        else
        {
            row3.enQueue(row1.peek());
            row1.deQueue();
        }
        
        if (row2.getSize() != 0 and row3.getSize() != 0)
        {
            if (row2.peek() > row3.peek())
            {
                row2.enQueue(row2.deQueue());
            }
            else if (row2.peek() < row3.peek())
            {
                row3.enQueue(row3.deQueue());
            }
        }
    }
    cout << "<Output>" << endl;
    row1.printRow(1);
    row2.printRow(2);
    row3.printRow(3);
    cout << "------------------" << endl;
    return 0;
}