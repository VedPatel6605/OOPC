// This program is created by 23IT096_VED.
#include <iostream>
#include <iomanip>
using namespace std;
class literature
{
    string id;
    string title;

public:
    void getldata()
    {
        cout << "Enter the ID : ";
        cin >> id;
        cout << "Enter title : ";
        getchar();
        getline(cin, title);
    }
    void putldata()
    {
        cout << left << setw(20) << id;
        cout << left << setw(20) << title;
    }
};
class e_lit : public virtual literature
{
    string doi;

public:
    void getedata()
    {
        getldata();
        cout << "Enter DOI : ";
        getchar();
        getline(cin, doi);
    }
    void putedata()
    {
        putldata();
        cout << left << setw(20) << doi;
    }
};
class mb_lit : public virtual literature
{
    int no_copies;

public:
    void getmdata()
    {
        getldata();
        cout << "Enter the no of copies : ";
        cin >> no_copies;
    }
    void putmdata()
    {
        putldata();
        cout << left << setw(20) << no_copies;
    }
};
class book : public e_lit, public mb_lit
{
    int ISBN;
    char tb;

public:
    void getbdata()
    {
        cout << "Enter the ISBN : ";
        cin >> ISBN;
        cout << "(E)copy or (H)ardbound : ";
        cin >> tb;
        if (tb == 'E' || tb == 'e')
        {
            getedata();
        }
        else if (tb == 'H' || tb == 'h')
        {
            getmdata();
        }
    }
    void putbdata()
    {
        if (tb == 'E' || tb == 'e')
        {
            putedata();
        }
        else if (tb == 'H' || tb == 'h')
        {
            putmdata();
        }
        cout << left << setw(20) << ISBN;
    }
};
class magazine : public e_lit, public mb_lit
{
    int ISSN;
    char tm;

public:
    void getmadata()
    {

        cout << "Enter the ISSN : ";
        cin >> ISSN;
        cout << "(E)copy or (H)ardbound : ";
        cin >> tm;
        if (tm == 'E' || tm == 'e')
        {
            getedata();
        }
        else if (tm == 'H' || tm == 'h')
        {
            getmdata();
        }
    }
    void putmadata()
    {
        if (tm == 'E' || tm == 'e')
        {
            putedata();
        }
        else if (tm == 'H' || tm == 'h')
        {
            putmdata();
        }
        cout << left << setw(20) << ISSN;
    }
};
int main()
{
    int choice = 0;
    char h, ch;
    int bcount = 0, mcount = 0;
    book b[100];
    magazine m[100];
    do
    {

        cout << "Enter 1 : Add Book data" << endl;
        cout << "Enter 2 : Add magazine data" << endl;
        cout << "Enter 3 : List all Book" << endl;
        cout << "Enter 4 : List all magazine" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            do
            {
                cout << "***** ADD BOOK DATA *****" << endl;
                b[bcount].getbdata();
                bcount++;
                cout << "Are you want to enter a book?:";
                cin >> h;
            } while (h == 'Y' || h == 'y');
        }
        break;
        case 2:
        {
            do
            {
                cout << "***** ADD MAGAZINE DATA *****" << endl;
                m[mcount].getmadata();
                mcount++;
                cout << "Are you want to enter a magazine?:";
                cin >> h;
            } while (h == 'Y' || h == 'y');
        }
        break;
        case 3:
        {
            cout << "***** LIST OF ALL BOOKS *****" << endl;
            for (int i = 0; i < bcount; i++)
            {
                b[i].putbdata();
                cout << endl;
            }
        }
        break;
        case 4:
        {
            cout << "***** LIST OF ALL MAGAZINE *****" << endl;
            for (int i = 0; i < mcount; i++)
            {
                m[i].putmadata();
                cout << endl;
            }
        }
        }
        cout << "-----------------------------------------------------" << endl;
        cout << "Do you want to Explore Another options?(Y/N):";
        cin >> ch;
    } while (ch == 'Y' || ch == 'y');
}
