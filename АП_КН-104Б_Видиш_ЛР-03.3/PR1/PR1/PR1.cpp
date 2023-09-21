// Lab_03_3.cpp
// < Видиш Роман >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 22
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
	double x;
	double R;
	double y;
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -8) {
		y = R * (-1);
	}
	else if (x > -8 && x <= R * (-1)) {
		y = ((R * (x + 8)) / (R * (-1)) + 8) - R;
	}
	else if (x > R * (-1) && x <= R) {
			;
	}
	else if (x > R && x <= 5) {
		y = (2 * x - 2 * R) / (5 - R);
	}
	else {
		y = 3;
	}

	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}

