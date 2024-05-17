// This program is created by 23IT096_VED.
#include <iostream>
using namespace std;
class complex
{
private:
    int x, y;

public:
    void getdata()
    {
        cout << "Enter The Real Part :" << endl;
        cin >> x;
        cout << "Enter The Imaginary Part:" << endl;
        cin >> y;
    }
    void putdata() const
    {
        cout << x;
        if (y < 0)
        {
            cout << y << "i" << endl;
        }
        else
        {
            cout << "+" << y << "i" << endl;
        }
    }
    complex operator+(complex &m)
    {
        complex temp;
        temp.x = x + m.x;
        temp.y = y + m.y;
        return temp;
    }
    complex operator-(complex &n)
    {
        complex temp;
        temp.x = x - n.x;
        temp.y = y - n.y;
        return temp;
    }
    complex operator*(complex &o)
    {
        complex temp;
        temp.x = (x * o.x) - (y * o.y);
        temp.y = (x * o.y) + (y * o.x);
        return temp;
    }
    complex operator/(complex &z)
    {
        complex temp;
        temp.x = ((x * z.x) + (y * z.x)) / (z.x * z.x) + (z.y * z.y);
        temp.y = ((x * z.x) + (y * z.x)) / (z.x * z.x) + (z.y * z.y);
        return temp;
    }
    complex operator!()
    {
        complex temp;
        temp.x = -x;
        temp.y = -y;
        return temp;
    }
};
int main()
{
    char ch;
    class complex a, b, c;
    a.getdata();
    b.getdata();
    cout << "Choose Operation" << endl;
    cout << "[+] Additiion" << endl;
    cout << "[-] Subtraction" << endl;
    cout << "[*] Multiplication" << endl;
    cout << "[/] Division" << endl;
    cout << "[!] Negation" << endl;
    cout << "Enter Your Choice " << endl;
    cin >> ch;

    switch (ch)
    {
    case '+':
    {
        c = a + b;
        c.putdata();
        break;
    }
    case '-':
    {
        c = a - b;
        c.putdata();
        break;
    }
    case '*':
    {
        c = a * b;
        c.putdata();
        break;
    }
    case '/':
    {
        c = a / b;
        c.putdata();
        break;
    }
    case '!':
    {
        c = !a;
        c.putdata();
        c = !b;
        c.putdata();
        break;
    }
        return 0;
    }
}