// This program is created by 23IT096_VED.
#include <iostream>
using namespace std;

class cm_convertor;

class mm_convertor
{
    float cm, mm;

public:
    float get_cm()
    {
        return cm;
    }
    mm_convertor()
    {
        cm = 0;
    }
    mm_convertor(float a)
    {
        cm = a / 10.0;
    }
    mm_convertor(cm_convertor &k);
    void display()
    {
        cout << "Measurement in mm:" << mm << endl;
    }
};

class cm_convertor
{
    float mm, cm;

public:
    cm_convertor(float a)
    {
        mm = a * 10;
    }
    float get_mm()
    {
        return mm;
    }
    cm_convertor(mm_convertor &y);
    void display()
    {
        cout << "Measurement in cm:" << cm << endl;
    }
};

mm_convertor::mm_convertor(cm_convertor &k)
{
    mm = k.get_mm();
}

cm_convertor::cm_convertor(mm_convertor &y)
{
    cm = y.get_cm();
}

int main()
{
    int y;
    cout << "Enter 1: mm to cm converter" << endl;
    cout << "Enter 2: cm to mm converter" << endl;
    cin >> y;
    switch (y)
    {
    case 1:
    {
        float v;
        cout << "Enter the mm :" << endl;
        cin >> v;
        mm_convertor mm1(v);
        cm_convertor cm1(mm1);
        cm1.display();
        break;
    }
    case 2:
    {
        cout << "Enter the cm:" << endl;
        float u;
        cin >> u;
        cm_convertor cm2(u);
        mm_convertor mm2(cm2);
        mm2.display();
    }
    }
}
