
#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char str[100];

public:
    // Default constructor
    String()
    {
        str[0] = '\0';
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    String(const char s[])
    {
        strcpy(str, s);
        cout << "Parameterized constructor called" << endl;
    }

    // Accept function
    void Accept()
    {
        cout << "Enter a string: ";
        cin.getline(str, 100);
    }

    // Display function
    void Display()
    {
        cout << "String is: " << str << endl;
    }

    // Destructor
    ~String()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    String s1;          // Calls default constructor
    s1.Accept();
    s1.Display();

    String s2("Hello C++");  // Calls parameterized constructor
    s2.Display();

    return 0;
}
