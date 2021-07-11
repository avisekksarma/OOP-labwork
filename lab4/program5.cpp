// 5. Write a program that illustrate the following relationship and comment the relationships.
// i) const_object.non_const_mem_function
// ii) const_object.const_mem_function
// iii) non_const_object.non_const_mem_function
// iv) non_const_object.const_mem_function

#include <iostream>

using namespace std;
class Test
{
private:
    int data;

public:
    Test(int d)
    {
        data = d;
    }
    void changeData(int newData)
    {
        data = newData;
    }
    int getData() const
    {
        return data;
    }
};

int main()
{
    const Test a(12);

    // a.changeData(26);  -> invalid as : const_object.non_const_mem_function
    cout << "Data(a) = " << a.getData() << endl;

    Test b(20);
    b.changeData(40);
    cout << "Data(b) = " << b.getData() << endl;

    return 0;
}