
#include <iostream>
#include <cmath>

using namespace std;;

int main()
{
    double x, y, z1, z2;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    z1 = pow(cos(x), 4) + pow(sin(y), 2) + 1 / 4 * pow(sin(2 * x - 1), 2);
    z2 = sin(y + x) * sin(y - x);

    cout << "z1 = " << z1;
    cout << "z2 = " << z2;
    
}

