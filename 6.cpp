// This program is created by 23IT096_VED.
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;

class Employee
{
private:
    int empId;
    string empName, qualification;
    float experience;
    long contactNumber;

public:
    static float expSum;
    static float avgExp;
    static int counter;

    Employee()
    {
        counter++;
    }

    static void showAvgExp()
    {
        avgExp = expSum / counter;
        cout << setw(30) << "Average experience of employees :" << avgExp;
    }

    void insertEmpDetails()
    {
        cout << "\nEnter employee Id"
             << ":";
        cin >> empId;
        fflush(stdin);
        cout << "Enter employee's name"
             << ":";
        getline(cin, empName);
        cout << "Enter employee's qualification"
             << ":";
        getline(cin, qualification);
        cout << "Enter employee's experience(in years)"
             << ":";
        cin >> experience;
        fflush(stdin);
        cout << "Enter employee's contact number"
             << ":";
        cin >> contactNumber;
        fflush(stdin);

        expSum = expSum + experience;
    }

    bool showEmpDetails(int temp_id)
    {
        if (temp_id == empId)
        {
            cout << endl;
            for (int i = 0; i < 40; i++)
            {
                cout << "-";
            }
            cout << endl
                 << endl
                 << left << setw(20) << "Employee ID"
                 << ": " << setw(4) << empId << endl
                 << left << setw(20) << "Employee name"
                 << ": " << empName << endl
                 << left << setw(20) << "Qualification"
                 << ": " << qualification << endl
                 << left << setw(20) << "Experience"
                 << ": " << experience << "years" << endl
                 << left << setw(20) << "Contact Number"
                 << ": " << setw(10) << contactNumber << endl
                 << endl;
            for (int i = 0; i < 40; i++)
            {
                cout << "-";
            }
            return true;
        }
        else
            return false;
    }
};

float Employee::avgExp = 0;
int Employee::counter = 0;
float Employee::expSum = 0;

int main()
{
    int n, i, temp_id;
    cout << "Enter the number of employees:";
    cin >> n;
    fflush(stdin);
    class Employee emp[n];
    for (i = 0; i < n; i++)
    {
        emp[i].insertEmpDetails();
    }
    char controller;
    do
    {
        system("cls");
        cout << "Enter the option of your preference:\n"
             << "1.Display employee details by id.\n"
             << "2.Display average Experience of employees\n";
        int menuNumber;
        cin >> menuNumber;
        switch (menuNumber)
        {
        case 1:
            char controller;

            system("cls");
            cout << "\nEnter employeeId:";
            cin >> temp_id;
            fflush(stdin);
            for (i = 0; i < n; i++)
            {
                if (emp[i].showEmpDetails(temp_id))
                    break;
            }
            if (i == n)
            {
                cout << endl;
                for (i = 0; i < 40; i++)
                    cout << "*";
                cout << "\nERROR: ENTERED EMPLOYEE ID DOES NOT EXIST\n";
                for (i = 0; i < 40; i++)
                    cout << "*";
            }

            break;

        case 2:
            Employee::showAvgExp();

        default:
            break;
        }
        cout << "\n\nPress Y to get another employee detail , press N to exit:";
        cin >> controller;
        fflush(stdin);
    } while (controller == 'Y' || controller == 'y');
}