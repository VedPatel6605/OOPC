// This program is created by 23IT096_VED.
#include <iostream>
#include <iomanip>
using namespace std;
class result;
string convert(int);
int sgpa(int);
class student
{
    char stu_id[8];
    int semester;
    string name_of_stu;

public:
    void getdata()
    {
        cout << "Enter student id:";
        cin >> stu_id;
        cout << "Enter Name of student:";
        getchar();
        getline(cin, name_of_stu);
        cout << "Enter the Semester:";
        cin >> semester;
    }
    void putdata()
    {
        cout << "-------------------------------" << endl;
        cout.width(15);
        cout << left << "Student ID"
             << ":" << stu_id << endl;
        cout.width(15);
        cout << left << "Student Name"
             << ":" << name_of_stu << endl;
        cout.width(15);
        cout << left << "Semester"
             << ":" << semester << endl;
    }
    void getdata_result(result &);
    void putdata_result(result &);
};

class result
{
    char subject[3][30];
    int sum1 = 0, sum2 = 0, credit_sum = 0;
    float Sgpa;
    string th_grade[3], pa_grade[3];
    int th_mark[3], pa_mark[3];
    int th_g[3], pa_g[3], th_c[3], pa_c[3];
    friend void student::getdata_result(result &r);
    friend void student::putdata_result(result &r);
};
void student ::getdata_result(result &r)
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter " << i + 1 << " subject name:";
        getchar();
        cin.getline(r.subject[i], 30);
        cout << "Enter marks for " << r.subject[i] << " (Theory Practical): " << endl;
        cin >> r.th_mark[i] >> r.pa_mark[i];
        cout << "Enter credit for " << r.subject[i] << " (Theory Practical): " << endl;
        cin >> r.th_c[i] >> r.pa_c[i];
        r.th_grade[i] = convert(r.th_mark[i]);
        r.pa_grade[i] = convert(r.pa_mark[i]); // take input
        r.th_g[i] = sgpa(r.th_mark[i]);
        r.pa_g[i] = sgpa(r.pa_mark[i]);
        r.sum1 += r.th_g[i] * r.th_c[i];
        r.sum2 += r.pa_g[i] * r.pa_c[i];
        r.credit_sum += r.th_c[i] + r.pa_c[i];
    }
    r.Sgpa = (float)(r.sum1 + r.sum2) / r.credit_sum;
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

void student ::putdata_result(result &r)
{
    cout << endl;
    cout.width(25);
    cout << left << "Subject";
    cout << setw(10) << "Theory"
         << "Practical" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << left << setw(25) << r.subject[i];
        cout << setw(10) << r.th_grade[i] << setw(10) << r.pa_grade[i];
        cout << endl;
    }
    cout << endl
         << "SGPA:" << setprecision(3) << r.Sgpa << endl;
    cout << "-------------------------------" << endl;
}
int main()
{
    student s;
    result r;
    for (int i = 0; i < 2; i++)
    {
        s.getdata();
        s.getdata_result(r);
        s.putdata();
        s.putdata_result(r);
    }
}
