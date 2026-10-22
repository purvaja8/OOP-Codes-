
#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    int numerator, denominator;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try
    {
        if (denominator == 0)
        {
            throw runtime_error("Division by zero is not allowed.");
        }

        cout << "Result = "
             << (double)numerator / denominator << endl;
    }
    catch (const runtime_error &e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
