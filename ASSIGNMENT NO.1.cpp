
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Print spaces
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }

        int num = 1;

        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";

            num = num * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}
