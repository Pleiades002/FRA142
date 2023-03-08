#include "Person.h"
#include <iostream>
using namespace std;

int main()
{
    Person me("Ten", 183, 18);
    Student dude("Thee", 170, 18, 32, 10);
    Teacher prof("Aj.Blink", 170, 30, "Programming");
    me.showPersonInfo();
    cout << "------------------" << endl;
    dude.showStudenInfo();
    cout << "------------------" << endl;
    prof.showTeacherInfo();
    cout << "------------------" << endl;
    prof.setSubject("Music");
    cout << prof.getSubject() << endl;
    cout << "------------------" << endl;
    prof.showTeacherInfo();
    cout << "------------------" << endl;
    return 0;
}
