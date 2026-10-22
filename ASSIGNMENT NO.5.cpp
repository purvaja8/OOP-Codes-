
#include <iostream>
using namespace std;

class Area
{
public:
    // Area of a square
    int calculate(int side)
    {
        return side * side;
    }

    // Area of a rectangle
    int calculate(int length, int breadth)
    {
        return length * breadth;
    }

    // Area of a circle
    float calculate(float radius)
    {
        return 3.14f * radius * radius;
    }
};

int main()
{
    Area a;

    cout << "Area of square: "
         << a.calculate(5) << endl;

    cout << "Area of rectangle: "
         << a.calculate(5, 4) << endl;

    cout << "Area of circle: "
         << a.calculate(3.0f) << endl;

    return 0;
}
