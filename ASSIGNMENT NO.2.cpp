
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    for (int i = 2; i <= 50; i += 2)
    {
        sum = sum + i;
    }

    cout << "Sum of even numbers between 1 and 50 is: "
         << sum;

    return 0;
}
