
#include <iostream>
#include <string>
using namespace std;

template <class T>
T maximumValue(T a, T b)
{
    return (a > b) ? a : b;
}

template <class T>
class Box
{
    T value;

public:
    Box(T v)
    {
        value = v;
    }

    void display()
    {
        cout << "Box value = " << value << endl;
    }
};

int main()
{
    cout << "Maximum integer = "
         << maximumValue(35, 20) << endl;

    cout << "Maximum double = "
         << maximumValue(8.5, 6.2) << endl;

    Box<int> b1(250);
    Box<string> b2("Generic Programming");

    b1.display();
    b2.display();

    return 0;
}
