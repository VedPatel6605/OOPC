// This program is created by 23IT096_VED.
#include<iostream>
using namespace std;
struct employee
{
    int id;
    char name[15];
    char qual[10];
    float exp;
    long long int cont;

    void getdata()
    {
        cout<<"Enter an Employee ID: ";
        cin>>id;
        cout<<"Employee Name: ";
        cin>>name;
        cout<<"Qualification: ";
        cin>>qual;
        cout<<"Experience: ";
        cin>>exp;
        cout<<"Contact Number: ";
        cin>>cont;
    }
}e;
int main()
{
    struct employee E1;
    E1.getdata();
    char a;
    cout<<endl;
    cout<<"Enter an Employee ID: "<<E1.id<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"Employee Name       : "<<E1.name<<endl;
    cout<<"Qualification       : "<<E1.qual<<endl;
    cout<<"Experience          : "<<E1.exp<<endl;
    cout<<"Contact Number      : "<<E1.cont<<endl;
    cout<<"---------------------------"<<endl;
    again: cout<<"Press Y to get another Employee Details,Press N to exit:";
    cin>>a;
    if(a=='Y'||a=='y')
    {
        cout<<"Enter an Employee ID: ";
        cin>>e.id;
        if(e.id>=1000 && e.id<=9999)
        {
        cout<<"Employee Name: ";
        cin>>e.name;
        cout<<"Qualification: ";
        cin>>e.qual;
        cout<<"Experience: ";
        cin>>e.exp;
        cout<<"Contact Number: ";
        cin>>e.cont;
        cout<<"---------------------------"<<endl;
        }
        else
        {
        cout<<"**************************"<<endl;
        cout<<"ERROR:ENTERED EMPLOYEE ID DOES NOT EXIST"<<endl;
        cout<<"**************************"<<endl;
        }
    }
    else
    {
        exit(0);
    }
    goto again;
}