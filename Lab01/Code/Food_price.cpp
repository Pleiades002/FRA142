#include <iostream>

using namespace std;
float price = 0;

float calculate(float _price)
{
    float tmpPrice = _price;
    float sumPrice = _price;
    for (int i = 1; i <= 30; i++)
    {
        if (i != 1 && i != 15)
        {
            if (i % 2 == 0)
            {
                tmpPrice = tmpPrice * 1.2;
                sumPrice += tmpPrice;
                cout << "Day: " << i << " Pay: " << tmpPrice << " Total: " << sumPrice << endl;
            }
            else if (i % 2 != 0)
            {
                tmpPrice = tmpPrice * 0.8;
                sumPrice += tmpPrice;
                cout << "Day: " << i << " Pay: " << tmpPrice << " Total: " << sumPrice << endl;
            }
        }
    }
    return sumPrice;
}

float calculate_while(float _price)
{
    float tmpPrice = _price;
    float sumPrice = _price;
    int day = 1;
    while (day <= 30)
    {
        if (day != 1 && day != 15)
        {
            if (day % 2 == 0)
            {
                tmpPrice = tmpPrice * 1.2;
                sumPrice += tmpPrice;
                cout << "Day: " << day << " Pay: " << tmpPrice << " Total: " << sumPrice << endl;
                day++;
            }
            else if (day % 2 != 0)
            {
                tmpPrice = tmpPrice * 0.8;
                sumPrice += tmpPrice;
                cout << "Day: " << day << " Pay: " << tmpPrice << " Total: " << sumPrice << endl;
                day++;
            }
        }
        else
            day++;
    }
    return sumPrice;
}

int main()
{
    cout << "Enter Start price: ";
    cin >> price;
    float total = calculate_while(price);
    cout << "Total need money is: " << total;
    return 0;
}