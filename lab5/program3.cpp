// 3. Compare the two object that contains integer values that demonstrate the overloading of equality (==), less than (<), greater than (>), not equal (!=),greater than or equal to (>=) and less than or equal to(<=) operators.

#include <iostream>

using namespace std;
class Integer
{
private:
    int data;

public:
    Integer(int d) : data(d) {}
    bool operator==(const Integer &other)
    {
        return data == other.data ? true : false;
    }
    bool operator<(const Integer &other)
    {
        return data < other.data ? true : false;
    }
    bool operator>(const Integer &other)
    {
        return data > other.data ? true : false;
    }
    bool operator!=(const Integer &other)
    {
        return data != other.data ? true : false;
    }
    bool operator>=(const Integer &other)
    {
        return data >= other.data ? true : false;
    }
    bool operator<=(const Integer &other)
    {
        return data <= other.data ? true : false;
    }
};
int main()
{
    Integer i1 = 2;
    Integer i2 = 7;
    bool val[6];
    val[0] = i1 == i2;
    val[1] = i1 < i2;
    val[2] = i1 > i2;
    val[3] = i1 != i2;
    val[4] = i1 >= i2;
    val[5] = i1 <= i2;
    // cout << "i1==i2 =>: "<<((i1==i2) ? "true":"false") <<endl;
    const char *data;
    for (int i = 0; i < 6; i++)
    {
        data = val[i] ? "true" : "false";
        cout << data << endl;
    }
}