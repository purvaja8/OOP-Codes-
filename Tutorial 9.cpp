
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area() = 0;

    virtual ~Shape()
    {
    }
};

class Circle : public Shape
{
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    double area() override
    {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape
{
    double length, breadth;

public:
    Rectangle(double l, double b)
    {
        length = l;
        breadth = b;
    }

    double area() override
    {
        return length * breadth;
    }
};

int main()
{
    Circle c(5);
    Rectangle r(6, 8);

    Shape *s;

    s = &c;
    cout << "Area of circle = " << s->area() << endl;

    s = &r;
    cout << "Area of rectangle = " << s->area() << endl;

    return 0;
}
