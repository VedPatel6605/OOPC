// This program is created by 23IT096_VED.
#include <iostream>
#include <iomanip>
using namespace std;
class car
{
private:
    int mileage;
    int tank_capa;
    string trasmission;
    int seating_cap;
    string airbag;
    string model;
    float price;
    string fuel;

public:
    string getmodel()
    {
        return model;
    }
    string getfuel()
    {
        return fuel;
    }
    float getprice()
    {
        return price;
    }

    void getdetail()
    {
        cout << "Enter the model name:";
        cin >> model;
        cout << "Enter the fuel Type:";
        cin >> fuel;
        cout << "Enter price:";
        cin >> price;
        cout << "Enter the milaege:";
        cin >> mileage;
        cout << "Enter the tank Capacity:";
        cin >> tank_capa;
        cout << "Enter the Transmission:";
        cin >> trasmission;
        cout << "Enter the seating Capacity:";
        cin >> seating_cap;
        cout << "Is Avaible Airbag in car:(YES/NO)";
        cin >> airbag;
    }

    void display()
    {
        cout << setw(10) << getmodel();
        cout << setw(10) << getfuel();
        cout << setw(10) << getprice();
        cout << setw(12) << mileage;
        cout << setw(15) << trasmission;
        cout << setw(15) << tank_capa;
        cout << setw(10) << seating_cap;
        cout << setw(10) << airbag << endl;
    }
};
void display1()
{
    cout << setw(10) << left << "Model" << setw(10) << "Fuel" << setw(10) << "price" << setw(12) << "Mileage" << setw(15) << "Transmission" << setw(15) << "Tank Capacity" << setw(10) << "Seating" << setw(10) << "Airbages" << endl;
    cout << setw(20) << " " << setw(10) << "(Lakhs)" << setw(10) << "(km/L)" << setw(17) << " " << setw(15) << "(Liters)" << setw(12) << "Capacity" << endl;
}
int main()
{
    int n, k = 1;
    cout << "Enter the number of car:";
    cin >> n;
    car c[n];
    string car_name[n];
    for (int i = 0; i < n; i++)
    {
        c[i].getdetail();
        car_name[i] = c[i].getmodel();
    }
    while (k != 0)
    {

        cout << endl
             << "WELCOME TO TATA MOTORS" << endl;
        cout << "GET CAR DETAIL AS PER YOUR PREFERENCE" << endl;
        cout << "(1) MODEL NAME" << "   " << "(2) FUEL TYPE" << "   " << "(3) PRICE RANGE" << endl;
        cout << "Enter your option:";
        cin >> k;
        cout << "-----------------------------------------" << endl;
        switch (k)
        {
        case 1:
        {
            int car_choose;
            cout << endl
                 << "List of Cars :" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << i + 1 << " " << car_name[i] << setw(5);
            }
            cout << endl;
            cout << "choose your car to get detail:";
            cin >> car_choose;
            display1();
            for (int i = 0; i < n; i++)
            {
                if (c[i].getmodel() == car_name[car_choose - 1])
                {
                    c[i].display();
                    break;
                }
            }
            break;
        }
        case 2:
        {
            int a;
            string fuelTypes[] = {"Petrol", "Diesel", "CNG", "EV"};
            cout << "Yash Motors Available With Fuel option :" << endl;
            cout << "(1)Petrol  (2)Diesel  (3)CNG  (4)Electric" << endl;
            cout << "Enter Your Fuel Preference :";
            cin >> a;
            display1();
            for (int i = 0; i < n; i++)
            {
                if (c[i].getfuel() == fuelTypes[a - 1])
                {
                    c[i].display();
                }
            }
            break;
        }
        case 3:
        {
            int vy;
            cout << "Enter Your Maximun Affordable Range in Lakhs :";
            cin >> vy;
            display1();
            for (int i = 0; i < n; i++)
            {
                if (c[i].getprice() <= vy)
                {
                    c[i].display();
                }
            }
        }
        }
        cout << "PRESS 0 FOR EXIST OTHERWISE PRESS 1:";
        cin >> k;
    }
    return 0;
}