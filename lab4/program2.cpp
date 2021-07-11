// 2. Write a program that has a class with a dynamically allocated character array as its data member. One object should contain "Engineers are" and another should contain " Creatures of logic". Member function join() should concatenate two strings by passing two objects as arguments. Display the concatenated string through a member function. Use constructors to allocate and initialize the data member. Also, write a destructor to free the allocated memory for the character array. Make your own function for concatenation of two strings.

#include <iostream>
#include <cstring>

using namespace std;

class Engineer
{
private:
    char *val;

public:
    Engineer()
    {
    }
    Engineer(const char *c)
    {

        val = new char[strlen(c) + 1];
        strcpy(val, c);
    }
    ~Engineer()
    {
        delete[] val;
    }
    void join(Engineer &a, Engineer &b)
    {
        char *data = new char[strlen(a.val)+strlen(b.val)+1];
        strcat(data, a.val);
        strcat(data, b.val);
        val = new char[strlen(data)];
        strcpy(val, data);
        delete[] data;
    }
    void display()
    {
        cout << "String is: " << val << endl;
    }
};

int main()
{
    Engineer a("Engineers are");
    Engineer b(" Creatures of logic");
    Engineer c;
    c.join(a, b);
    a.display();
    b.display();
    c.display();
    return 0;
}
