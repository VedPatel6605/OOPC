// This program is created by 23IT096_VED.
#include <iostream>
using namespace std;
class employee
{
    float exp;

public:
    employee()
    {
        exp = 0;
    }
    employee(int a, int b)
    {
        exp = a + (b / 12.0);
    }
    operator float()
    {

        return exp;
    }
};
int main()
{
    int y, m;
    float v;
    cout << "Enter your experince in year" << endl;
    cin >> y;
    cout << "Enter your experince in month" << endl;
    cin >> m;
    employee e1(y, m);
    v = e1;
    cout << "Employee Experince is " << v << endl;
}