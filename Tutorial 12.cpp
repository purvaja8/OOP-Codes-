
#include <iostream>
using namespace std;

namespace Arithmetic
{
    void calculate()
    {
        cout << "Arithmetic namespace: 15 + 25 = "
             << 15 + 25 << endl;
    }
}

namespace Geometry
{
    void calculate()
    {
        cout << "Geometry namespace: rectangle area = "
             << 7 * 9 << endl;
    }
}

int main()
{
    Arithmetic::calculate();
    Geometry::calculate();

    return 0;
}
