// 3. Create a class called Musicians to contain three methods string(), wind(), and perc(). Each of these methods should initialize a string array to contain the following instruments

// -  veena, guitar, sitar, sarod and mandolin under string()

// -  flute, clarinet, saxophone, nadhaswaram, and piccolo under wind()

// -  tabla, mridangam, bangos, drums and tambour under perc()

// It should also display the contents of the arrays that are initialized. Create a derived class called TypeIns to contain a method called get() and show(). The get() method must display a  menu as follows

// Type of instruments to be displayed

// a.  String instruments

// b.  Wind instruments

// c.  Percussion instruments

// The show() method should display the relevant detail according to our choice. The base class variables must be accessible only to their derived classes.

#include <iostream>
using namespace std;

class Musicians
{
protected:
    const char *strIns[5];
    const char *windIns[5];
    const char *percIns[5];

public:
    void string()
    {
        strIns[0] = "veena";
        strIns[1] = "guitar";
        strIns[2] = "sitar";
        strIns[3] = "sarod";
        strIns[4] = "mandolin";
    }
    void wind()
    {
        windIns[0] = "flute";
        windIns[1] = "clarinet";
        windIns[2] = "saxophone";
        windIns[3] = "nadhaswaram";
        windIns[4] = "piccolo";
    }
    void perc()
    {
        percIns[0] = "tabla";
        percIns[1] = "mridangam";
        percIns[2] = "bangos";
        percIns[3] = "drums";
        percIns[4] = "tambour";
    }

    void displayArray(const char *ptr[5])
    {
        cout << "==== Display result: =====" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << ptr[i] << endl;
        }
    }
};

class TypeIns : public Musicians
{
private:
    void show(const char *ptr[5])
    {
        displayArray(ptr);
    }

public:
    TypeIns()
    {
        string();
        wind();
        perc();
    }
    void get()
    {

        char c;
        do
        {
            cout << "Type of instruments to be displayed" << endl
                 << "a.String instruments" << endl
                 << "b.Wind instruments" << endl
                 << "c.Percussion instruments" << endl;

            cin >> c;
            if (c == 'a')
            {
                show(strIns);
                break;
            }
            else if (c == 'b')
            {
                show(windIns);
                break;
            }
            else if (c == 'c')
            {
                show(percIns);
                break;
            }
            else
            {
                cout << "Invalid choice!!!" << endl;
            }
        } while (true);
    }
};

int main()
{
    TypeIns t;
    t.get();
    return 0;
}