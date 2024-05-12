// This program is created by 23IT096_VED.
#include <iostream>
#include <iomanip>
using namespace std;

void print_marksheet();
string convert(int);
int sgpa(int);
int main()
{
    print_marksheet();
    return 0;
}

void print_marksheet()
{
    char stu_id[8], name_of_stu[20], subject[3][30];
    int semester, sum1 = 0, sum2 = 0, credit_sum = 0;
    float Sgpa;
    string th_grade[3], pa_grade[3];
    int th_mark[3], pa_mark[3];
    int th_g[3], pa_g[3], th_c[] = {3, 3, 3}, pa_c[] = {1, 1, 1};

    cout << "Enter Student ID:";
    cin >> stu_id;
    cout << "Enter Name Of Student:";
    cin >> name_of_stu;
    cout << "Enter The Semester:";
    cin >> semester;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter " << i + 1 << " subject name:";
        cin >> subject[i];
        cout << "Enter marks for " << subject[i] << " (Theory Practical): " << endl;
        cin >> th_mark[i] >> pa_mark[i];
        th_grade[i] = convert(th_mark[i]);
        pa_grade[i] = convert(pa_mark[i]);
        th_g[i] = sgpa(th_mark[i]);
        pa_g[i] = sgpa(pa_mark[i]);
        sum1 += th_g[i] * th_c[i];
        sum2 += pa_g[i] * pa_c[i];
        credit_sum += th_c[i] + pa_c[i];
    }
    Sgpa = (float)(sum1 + sum2) / credit_sum;

    cout.width(15);
    cout << left << "Student ID"
         << ":" << stu_id << endl;
    cout.width(15);
    cout << left << "Student Name"
         << ":" << name_of_stu << endl;
    cout.width(15);
    cout << left << "Semester"
         << ":" << semester << endl;
    cout << endl;
    cout.width(25);
    cout << left << "Subject";
    cout << setw(10) << "Theory"
         << "Practical" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << left << setw(25) << subject[i];
        cout << setw(10) << th_grade[i] << setw(10) << pa_grade[i];
        cout << endl;
    }
    cout << endl
         << "SGPA:" << setprecision(3) << Sgpa << endl;
}

string convert(int mark)
{
    if (mark >= 80)
    {
        return "AA";
    }
    else if (mark >= 73 && mark < 80)
    {
        return "AB";
    }
    else if (mark >= 66 && mark < 73)
    {
        return "BB";
    }
    else if (mark >= 60 && mark < 66)
    {
        return "BC";
    }
    else if (mark >= 55 && mark < 60)
    {
        return "CC";
    }
    else if (mark >= 50 && mark < 55)
    {
        return "CD";
    }
    else if (mark >= 45 && mark < 50)
    {
        return "DD";
    }
    else if (mark < 45)
    {
        return "FF";
    }
    return 0; // Return an empty string if none of the conditions are met
}

int sgpa(int mark)
{
    if (mark >= 80)
    {
        return 10;
    }
    else if (mark >= 73 && mark < 80)
    {
        return 9;
    }
    else if (mark >= 66 && mark < 73)
    {
        return 8;
    }
    else if (mark >= 60 && mark < 66)
    {
        return 7;
    }
    else if (mark >= 55 && mark < 60)
    {
        return 6;
    }
    else if (mark >= 50 && mark < 55)
    {
        return 5;
    }
    else if (mark >= 45 && mark < 50)
    {
        return 4;
    }
    else if (mark < 45)
    {
        return 0;
    }
    return 0;
}