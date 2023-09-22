#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	double S;
	cout << "N = "; cin >> N;
	S = 0;
	k = 20;
	i = N;
	while (i <= k)
	{
		S += (cos(i) + sin(i)) / (1 + cos(i) * sin(i));
		i++;
	}
	cout << S << endl;
	
	S = 0;
	i = N;
	do {
		S += (cos(i) + sin(i)) / (1 + cos(i) * sin(i));
		i++;
	} while (i <= k);
	cout << S << endl;
	S = 0;
	for (i = N; i <= k; i++)
	{
		S += (cos(i) + sin(i)) / (1 + cos(i) * sin(i));
	}
	cout << S << endl;
	S = 0;
	for (i = k; i >= N; i--)
	{
		S += (cos(i) + sin(i)) / (1 + cos(i) * sin(i));
	}
	cout << S << endl;
	return 0;
}