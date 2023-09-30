#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;;

int main()
{
    double x, y, A, B, xp, xk, dx;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "xd = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;


    while (x <= xk)
    {
        A = abs(x * x * x);
        if (x < -1) {
            B = abs(2 + x) + sin(x) * sin(x);
        }
        else if (x <= 1 && x >= -1) {
            B = atan(pow(x, 3) + 1) + 1;
        }
        else {
            B = exp(cos(x)) + log10(1 / x + 1);
        };
        y = A + B;
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
}