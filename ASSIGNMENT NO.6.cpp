
#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    // Function to input a complex number
    void read()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Function to display a complex number
    void display()
    {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }

    // Overload + operator
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Overload - operator
    Complex operator -(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    // Overload * operator
    Complex operator *(Complex c)
    {
        Complex temp;
        temp.real = real * c.real - imag * c.imag;
        temp.imag = real * c.imag + imag * c.real;
        return temp;
    }

    // Overload / operator
    Complex operator /(Complex c)
    {
        Complex temp;
        float denominator = c.real * c.real
                          + c.imag * c.imag;

        if (denominator == 0)
        {
            cout << "Division by zero is not possible!"
                 << endl;
            temp.real = 0;
            temp.imag = 0;
        }
        else
        {
            temp.real = (real * c.real + imag * c.imag)
                        / denominator;

            temp.imag = (imag * c.real - real * c.imag)
                        / denominator;
        }

        return temp;
    }
};

int main()
{
    Complex c1, c2, result;

    cout << "Enter first complex number:" << endl;
    c1.read();

    cout << "\nEnter second complex number:" << endl;
    c2.read();

    result = c1 + c2;
    cout << "\nAddition: ";
    result.display();

    result = c1 - c2;
    cout << "Subtraction: ";
    result.display();

    result = c1 * c2;
    cout << "Multiplication: ";
    result.display();

    result = c1 / c2;
    cout << "Division: ";
    result.display();

    return 0;
}
