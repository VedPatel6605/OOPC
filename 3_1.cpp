// This program is created by 23IT096_VED.
#include <iostream>
using namespace std;
struct cars
{
    // ALL DETAILS OF CARS
    string Model[10] = {"TIAGO", "PUNCH", "ALTROZ", "TIGOR", "NEXON", "HARRIER", "SAFARI"};
    string efuel[10] = {"Electric", "n", "n", "Electric", "Electric", "n", "n"};
    string Fuel[10] = {"Petrol", "Diesel", "Petrol", "Diesel", "Petrol", "Diesel", "Petrol"};
    string Price[10] = {"10.2", "10.5", "11.8", "13.2", "15.5", "21.6", "25.0"};
    string Mileage[10] = {"19", "20", "22", "17", "23", "14.6", "15"};
    int emileage = 300;
    string Tra[10] = {"Manual", "AMT", "Manual", "Manual", "AMT", "AMT", "AMT"};
    string Tc[10] = {"60", "37", "40", "45", "44", "50", "60"};
    string Sc[10] = {"5", "5", "5", "5", "5", "5", "5"};
    string Air[10] = {"Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes"};
    int x, y;
    char z[3];
    // DATA MEMBERS
    // for 1st
    void cardetails()
    {
        cout << "LIST OF CARS" << endl;
        for (int i = 0; i <= 6; ++i)
        {
            cout << "(" << i + 1 << ")" << Model[i] << "\t";
        }
        cout << "\n\n";
        cout << "CHOOSE YOUR CAR TO GET DETAILS:";
        // int x;
        cin >> x;
        cout << "CAR MODEL\t" << "FUEL TYPE\t" << "PRICE(Lakhs)\t" << "MILAGE(Km/L)\t" << "TRANSMISSION\t" << "TANK CAPACITY(Liters)\t" << "SEATING CAPACITY\t" << "AIRBAGS\t" << endl;
        for (int i = x - 1; i <= x - 1; i++)
        {
            cout << Model[i] << "\t\t" << Fuel[i] << "\t\t" << Price[i] << "\t\t" << Mileage[i] << "\t\t" << Tra[i] << "\t\t" << Tc[i] << "\t\t\t" << Sc[i] << "\t\t\t" << Air[i] << endl;
        }
    }
    // for 2nd
    void fuel()
    {
        cout << "\nTATA MOTERS ARE AVILABLE WITH FUEL OPTION\n"
             << endl;
        cout << "(1)Petrol  (2)Diesel  (3)CNG  (4)Electric" << endl;
        cout << "\nENTER YOUR FUEL PREFERENCE:";
        // int y;
        cin >> y;
        cout << "\n\n";
        if (y == 1)
        {
            cout << "CAR MODEL\t" << "FUEL TYPE\t" << "PRICE(Lakhs)\t" << "MILAGE(Km/L)\t" << "TRANSMISSION\t" << "TANK CAPACITY(Liters)\t" << "SEATING CAPACITY\t" << "AIRBAGS\t" << endl;
            for (int i = 0; i < 8; i++)
            {
                if (i % 2 == 0)
                {
                    cout << Model[i] << "\t\t" << Fuel[i] << "\t\t" << Price[i] << "\t\t" << Mileage[i] << "\t\t" << Tra[i] << "\t\t" << Tc[i] << "\t\t\t" << Sc[i] << "\t\t\t" << Air[i] << endl;
                }
            }
        }
        else if (y == 2)
        {
            cout << "CAR MODEL\t" << "FUEL TYPE\t" << "PRICE(Lakhs)\t" << "MILAGE(Km/L)\t" << "TRANSMISSION\t" << "TANK CAPACITY(Liters)\t" << "SEATING CAPACITY\t" << "AIRBAGS\t" << endl;
            for (int i = 0; i < 8; i++)
            {
                if (i % 2 == 1)
                {
                    cout << Model[i] << "\t\t" << Fuel[i] << "\t\t" << Price[i] << "\t\t" << Mileage[i] << "\t\t" << Tra[i] << "\t\t" << Tc[i] << "\t\t\t" << Sc[i] << "\t\t\t" << Air[i] << endl;
                }
            }
        }
        else if (y == 3)
        {
            cout << "------THIS TYPES OF CARS ARE NOT AVILABE------" << endl;
            cout << "------PLEASE CONTACT TATA MOTERS------";
            cout << "\n\n";
        }

        else if (y == 4)
        {
            cout << "CAR MODEL\t" << "FUEL TYPE\t" << "PRICE(Lakhs)\t" << "MILAGE(Km/L)\t" << "TRANSMISSION\t" << "SEATING CAPACITY\t" << "AIRBAGS\t" << endl;
            for (int i = 0; i < 8; i++)
            {
                if (i == 0 || i == 3 || i == 4)
                {
                    cout << Model[i] << "\t\t" << efuel[i] << "\t" << Price[i] << "\t\t" << emileage << "\t\t" << Tra[i] << "\t\t" << Sc[i] << "\t\t\t" << Air[i] << endl;
                }
            }
            cout << "\n\n";
        }
    }
    // for 3rd
    void range()
    {
        cout << "\n\nENTER YOUR MAXIMUM AFFODABLE RANGE IN LAKHS:";
        fflush(stdin);
        cin.getline(z, 3);
        cout << "CAR MODEL\t" << "FUEL TYPE\t" << "PRICE(Lakhs)\t" << "MILAGE(Km/L)\t" << "TRANSMISSION\t" << "TANK CAPACITY(Liters)\t" << "SEATING CAPACITY\t" << "AIRBAGS\t" << endl;
        for (int i = 0; i < 8; i++)
        {
            if (Price[i] <= z)
            {
                cout << Model[i] << "\t\t" << Fuel[i] << "\t\t" << Price[i] << "\t\t" << Mileage[i] << "\t\t" << Tra[i] << "\t\t" << Tc[i] << "\t\t\t" << Sc[i] << "\t\t\t" << Air[i] << endl;
            }
        }
    }
    // DATA MEMBER.
    void getdata()
    {
        cout << "WELCOME TO TATA MOTERS" << endl;
        cout << "\nGET THE CAR DETAILS AS PER YOUR PRFERENCE\n"
             << endl;
    start:
        cout << "(1)Model Name\t(2)Fuel Type\t(3)Price Range" << endl;
        cout << "\nENTER YOUR OPTION\t:";
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << endl
                 << "--------------------------------" << endl
                 << endl;
        }
        if (n == 2)
        {
            cout << endl
                 << "--------------------------------" << endl;
        }
        if (n == 3)
        {
            cout << endl
                 << "--------------------------------";
        }

        if (n == 1)
        {
            cardetails();
        }
        else if (n == 2)
        {
            fuel();
        }
        else if (n == 3)
        {
            range();
        }
        char more;
        cout << "FOR MORE DETAILS YES OR NO:";
        cin >> more;
        for (int i = 0; i < more; i++)
        {
            fflush(stdin);
            if (more == 'Y' || more == 'y')
            {
                goto start;
            }
            else
            {
                cout << "\n----------------THANKYOU--------------\n";
                break;
            }
        }
    }
};
int main()
{
    struct cars c1;
    c1.getdata();
    return 0;
}