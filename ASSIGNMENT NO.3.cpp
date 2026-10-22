
#include <iostream>
using namespace std;

// Function to read array elements
void read(int a[], int n)
{
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

// Function to display array elements
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Function to swap two numbers using call by reference
void swapNumbers(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

// Function to sort the array in ascending order
void sortArray(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swapNumbers(a[j], a[j + 1]);
            }
        }
    }
}

int main()
{
    int a[100], n;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Invalid array size!";
        return 0;
    }

    read(a, n);

    cout << "Original array: ";
    display(a, n);

    sortArray(a, n);

    cout << "Sorted array: ";
    display(a, n);

    return 0;
}
