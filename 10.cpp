// This program is created by 23IT096_VED.
#include <iostream>
using namespace std;
class employee
{
    int year;
    int month;

public:
    employee()
    {
        year = 0;
        month = 0;
    }
    employee(float a)
    {
        year = a;
        month = (a - year) * 12;
    }
    void display()
    {
        cout << "Employee Experince is " << year << " year" << " and " << month << " month" << endl;
    }
};
int main()
{
    float y;
    cout << "Enter your experince" << endl;
    cin >> y;
    employee e1 = y;
    e1.display();
}