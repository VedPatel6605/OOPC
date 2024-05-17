// This program is created by 23IT096_VED.
#include <stdio.h>
#include <iostream>
#include <iomanip>
#define PI 3.14

using namespace std;

// area function for circle
float area(int r, float a) // r=radius,a=area
{
    cout << "Enter the radius of a circle:";
    cin >> r;
    fflush(stdin);
    cout << "The area of a circle:" << PI * r * r; // formula of area
    return a;
}
// area function for rectangle
int area(int h, int w, int a) // h=height,w=width,a=area
{
    cout << "Enter the height of the rectangle:";
    cin >> h;
    fflush(stdin);
    cout << "Enter the width of the rectangle:";
    cin >> w;
    fflush(stdin);
    cout << "The area of the the rectangle:" << h * w;
    return a;
}
// area function for cuboid
int area(int hc, int wc, int dc, int a) // here c indicate cuboid
{
    cout << "Enter the height of the cuboid:";
    cin >> hc;
    fflush(stdin);
    cout << "Enter the width of the cuboid:";
    cin >> wc;
    fflush(stdin);
    cout << "Enter the depth of cuboid:";
    cin >> dc;
    fflush(stdin);
    cout << "The area of cuboid:" << hc * wc * dc;
    return a;
}

int main()
{
    int r, h, w, d, hc, wc, dc;
    float a;
    a = area(r, a); // calling circle area function
    cout << endl
         << endl;
    a = area(h, w, a); // calling circle rectangle function
    cout << endl
         << endl;
    a = area(hc, wc, dc, a); // calling circle cuboid function
    cout << endl;
}
