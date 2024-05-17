// This program is created by 23IT096_VED.
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

class car
{
private:
    float mileage;
    int tank_capa;
    string transmission;
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

    void getdetail(string model, string fuel, float price, float mileage, string transmission, int tank_capa, int seating_cap, string airbag)
    {
        this->model = model;
        this->fuel = fuel;
        this->price = price;
        this->mileage = mileage;
        this->tank_capa = tank_capa;
        this->transmission = transmission;
        this->seating_cap = seating_cap;
        this->airbag = airbag;
    }

    void display()
    {
        cout << setw(10) << getmodel();
        cout << setw(10) << getfuel();
        cout << setw(10) << getprice();
        cout << setw(12) << mileage;
        cout << setw(15) << transmission;
        cout << setw(15) << tank_capa;
        cout << setw(10) << seating_cap;
        cout << setw(10) << airbag << endl;
    }
};

void display1()
{
    cout << setw(10) << left << "Model" << setw(10) << "Fuel" << setw(10) << "Price" << setw(12) << "Mileage" << setw(15) << "Transmission" << setw(15) << "Tank Capacity" << setw(10) << "Seating" << setw(10) << "Airbags" << endl;
    cout << setw(20) << " " << setw(10) << "(Lakhs)" << setw(10) << "(km/L)" << setw(17) << " " << setw(15) << "(Liters)" << setw(12) << "Capacity" << endl;
}

int main()
{
    int k = 1, count = 0;
    string car_name[100];
    ifstream inf("cardata.txt");

    if (!inf)
    {
        cout << "Unable to open file";
        return 1;
    }

    cout << "File opened successfully\n";
    string model_name, fuel_type, transmission, airbag;
    string price, mileage, tank_capacity;
    float price1, mileage1, tank_capacity1;
    string seating;
    int seating1;
    car c[100];

    while (inf)
    {
        getline(inf, model_name, ',');
        getline(inf, fuel_type, ',');
        getline(inf, price, ',');
        price1 = stof(price);
        getline(inf, mileage, ',');
        mileage1 = stof(mileage);
        getline(inf, transmission, ',');
        getline(inf, tank_capacity, ',');
        tank_capacity1 = stof(tank_capacity);
        getline(inf, seating, ',');
        seating1 = stoi(seating);
        getline(inf, airbag, ';');

        c[count++].getdetail(model_name, fuel_type, price1, mileage1, transmission, tank_capacity1, seating1, airbag);
    }

    inf.close();
    for (int i = 0; i < count - 1; i++)
    {
        car_name[i] = c[i].getmodel();
    }

    while (k != 0)
    {
        cout << endl
             << "WELCOME TO TATA MOTORS" << endl;
        cout << "GET CAR DETAIL AS PER YOUR PREFERENCE" << endl;
        cout << "(1) MODEL NAME" << "   " << "(2) FUEL TYPE" << "   " << "(3) PRICE RANGE" << endl;
        cout << "Enter your option : ";
        cin >> k;
        cout << endl
             << "-----------------------------------------" << endl;

        switch (k)
        {
        case 1:
        {
            int car_choose;
            cout << endl
                 << "LIST OF TATA CARS : " << endl;
            for (int i = 0; i < count - 1; i++)
            {
                cout << i + 1 << " " << car_name[i] << setw(5);
            }
            cout << endl;
            cout << "CHOOSE YOUR CAR TO GET DETAILS : ";
            cin >> car_choose;
            display1();
            for (int i = 0; i < count - 1; i++)
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
            cout << endl
                 << "TATA MOTORS Available With Fuel option : " << endl;
            cout << "(1)Petrol  (2)Diesel  (3)CNG  (4)Electric" << endl;
            cout << "Enter Your Fuel Preference : ";
            cin >> a;
            display1();
            for (int i = 0; i < count - 1; i++)
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
            cout << endl
                 << "Enter Your Maximum Affordable Range in Lakhs : ";
            cin >> vy;
            display1();
            for (int i = 0; i < count - 1; i++)
            {
                if (c[i].getprice() <= vy)
                {
                    c[i].display();
                }
            }
            break;
        }
        }
        cout << "PRESS 0 TO EXIT OTHERWISE PRESS 1 : ";
        cin >> k;
    }
    return 0;
}
