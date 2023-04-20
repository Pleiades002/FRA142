#include <iostream>
using namespace std;

class Employee
{
private:
    string name = " ";
    int salary = 0;

public:
    void setName(string n)
    {
        name = n;
    }

    void setSalary(int s)
    {
        salary = s;
    }

    string getName()
    {
        return name;
    }

    int getSalary()
    {
        return salary;
    }

    void showData()
    {
        cout << name << " " << salary << endl;
    }
};

int main()
{
    Employee emp1;
    emp1.setName("Kob");
    emp1.setSalary(15000);
    emp1.showData();

    Employee emp2;
    emp2.setName("Joy");
    emp2.setSalary(20000);
    emp2.showData();
    return 0;
}