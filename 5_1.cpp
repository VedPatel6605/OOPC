// This program is created by 23IT096_VED.
//********Staic Memory Allocation***********//
#include <iostream>
using namespace std;
#define PI 3.14;
int c;
class area_circle
{
    float radius;

public:
    area_circle()
    {
        radius = 1;
        c++;
    }
    area_circle(float a)
    {
        radius = a;
        c++;
    }
    area_circle(area_circle &y)
    {
        radius = y.radius;
        c++;
    }
    void display()
    {
        float area;
        area = radius * radius * PI;
        cout << "circle with radius " << radius << " has area " << area << endl;
    }
    void totalobj()
    {
        cout << "total active object are " << c << endl;
    }
    ~area_circle()
    {
        cout << "one object is deleted" << endl;
        c--;
        totalobj();
    }
};

int main()
{
    area_circle c1, c2(20.00f);
    area_circle c3(c1);
    c1.display();
    c2.display();
    c3.display();
}