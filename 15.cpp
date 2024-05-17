// This program is created by 23IT096_VED.
#include <iostream>
using namespace std;
class product
{
protected:
    int id;
    string name, manufacture;
    float price;

public:
    product(int id, string name, string manufacture, float price)
    {
        this->id = id;
        this->name = name;
        this->manufacture = manufacture;
        this->price = price;
    }
    virtual void putdata() = 0;
};
class smartwatch : public product
{
    float dial;

public:
    smartwatch(int id, string name, string manufacture, float price, float dial) : product(id, name, manufacture, price)
    {
        this->dial = dial;
    }
    void putdata()
    {
        cout << id << " : " << name << " : " << manufacture << " : " << price << " : " << dial;
    }
};
class bedsheet : public product
{
    float width, height;

public:
    bedsheet(int id, string name, string manufacture, float price, float width, float height) : product(id, name, manufacture, price)
    {
        this->width = width;
        this->height = height;
    }
    void putdata()
    {
        cout << id << " : " << name << " : " << manufacture << " : " << price << " : " << width << " : " << height;
    }
};
int main()
{
    int choice;
    int id;
    string p_name, m_name;
    float price;
    cout << "Enter 1 : smart watch menu" << endl;
    cout << "Enter 2 : bedsheet menu" << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        int d_size;
        smartwatch *ptr;
        cout << endl
             << "***** ENTER SMART WATCH DATA *****" << endl
             << endl;
        cout << "Enter Product ID : ";
        cin >> id;
        cout << "Enter Product Name : ";
        cin >> p_name; //-->getchar();
                       //-->getline(cin,p_name);
        cout << "Enter Product Manufacture Name : ";
        cin >> m_name; //-->getchar();
                       //-->getline(cin,m_name);
        cout << "Enter Product price : ";
        cin >> price;
        cout << "Enter Dial Size : ";
        cin >> d_size;

        cout << "--------------------------------------------------" << endl;
        ptr = new smartwatch(id, p_name, m_name, price, d_size);
        ptr->putdata();
        cout << endl;
        cout << "--------------------------------------------------" << endl;
        break;
    }
    case 2:
    {
        float heigth, width;
        bedsheet *ptr1;
        cout << endl
             << "***** ENTER BEDSHEET DATA *****" << endl
             << endl;
        cout << "Enter Product ID : ";
        cin >> id;
        cout << "Enter Product Name : ";
        cin >> p_name; //-->getchar();
                       //-->getline(cin,p_name);
        cout << "Enter Product Manufacture Name : ";
        cin >> m_name; //-->getchar();
                       //-->getline(cin,m_name);
        cout << "Enter Product price : ";
        cin >> price;
        cout << "Enter bedsheet heigth : ";
        cin >> heigth;
        cout << "Enter bedsheet width : ";
        cin >> width;

        cout << "--------------------------------------------------" << endl;
        ptr1 = new bedsheet(id, p_name, m_name, price, heigth, width);
        ptr1->putdata();
        cout << endl;
        cout << "--------------------------------------------------" << endl;
    }
    }
}
