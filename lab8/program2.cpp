// 2. Write a program to create a user-defined manipulator that will format the output by setting the width, precision, and fill character at the same time by passing arguments.

#include <iostream>
using namespace std;

class Manip
{
    int width;
    int precision;
    char fill;

public:
    Manip(int w, int p, char f) : width(w), precision(p), fill(f) {}
    friend ostream & operator<<(ostream &out, const Manip &m);
};
ostream & operator<<(ostream &out, const Manip &m)
{
    out.width(m.width);
    out.precision(m.precision);
    out.fill(m.fill);
    return out;
}
Manip set(int w, int p, char f)
{
    return Manip(w, p, f);
}
int main()
{
    cout << set(8, 4, '#') << 22.3679<<endl;
    return 0;
}

// #include <iostream>

// #include <cstring>

// using std::cin;

// using std::cout;

// using std::endl;

// using std::ostream;

// using std::flush;

// class UD_Manip

// {

// private:
//     int width, precision;

//     char fill;

// public:
//     UD_Manip(int W, int P, char F)
//     {

//         width = W;

//         precision = P;

//         fill = F;
//     }

//     friend ostream &operator<<(ostream &, UD_Manip);
// };

// ostream &operator<<(ostream &out, UD_Manip manip)

// {

//     out.width(manip.width);

//     out.precision(manip.precision);

//     out.fill(manip.fill);

//     out << flush;

//     return out;
// }

// UD_Manip setwpf(int w, int p, char f)

// {

//     return UD_Manip(w, p, f);
// }

// int main()

// {

//     cout << setwpf(10, 5, '#') << 28.66565544<<endl;

//     return 0;
// }