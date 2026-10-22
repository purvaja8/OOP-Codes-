
#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    // Function to read a complex number
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

    // Addition
    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Subtraction
    Complex subtract(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    // Multiplication
    Complex multiply(Complex c)
    {
        Complex temp;
        temp.real = real * c.real - imag * c.imag;
        temp.imag = real * c.imag + imag * c.real;
        return temp;
    }

    // Division
    Complex divide(Complex c)
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

    // Complex conjugate
    Complex conjugate()
    {
        Complex temp;
        temp.real = real;
        temp.imag = -imag;
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

    cout << "\nFirst complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    result = c1.add(c2);
    cout << "\nAddition: ";
    result.display();

    result = c1.subtract(c2);
    cout << "Subtraction: ";
    result.display();

    result = c1.multiply(c2);
    cout << "Multiplication: ";
    result.display();

    float denominatorCheck = 0; // Not needed for calculation

    result = c1.divide(c2);
    if (c2.real * c2.real + c2.imag * c2.imag != 0)
    {
        cout << "Division: ";
        result.display();
    }

    result = c1.conjugate();
    cout << "Conjugate of first number: ";
    result.display();

    return 0;
}
