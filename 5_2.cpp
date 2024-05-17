// This program is created by 23IT096_VED.
//********Dyanamic Memory Allowcation*******//
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
    area_circle *c1, *c2;
    area_circle *c3;
    c1 = new area_circle();
    c2 = new area_circle(20.00f);

    c1->display();
    c2->display();
    c3 = new area_circle(*c1);
    delete c2;
    delete c1;
    c3->display();
    delete c3;
}