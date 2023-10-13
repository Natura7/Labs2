#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double S1, S2;
    int k, i;
    //While
    S1 = 0;
    k = 1;
    while (k <= 20) {
        i = 1;
        S2 = 1;
        while (i <= k) {
            S2 += cos(i + k);
            i++;
        }
        S1 += pow(sin(k), 2) + abs(S2);
        k++;

    }
    cout << S1 << endl;
    S1 = 0;
    k = 1;
    // do while
    do {
        i = 1;
        S2 = 1;
        do {
            S2 += cos(i + k);
            i++;
        } while (i <= k);
        S1 += pow(sin(k), 2) + abs(S2);
        k++;

    } while (k <= 20);
    cout << S1 << endl;
    // For ++
    S1 = 0;
    k = 1;
    for (k = 1; k <= 20; k++) {
        S2 = 1;
        for (i = 1; i <= k; i++) {
            S2 += cos(i + k);
        }
        S1 += pow(sin(k), 2) + abs(S2);
    }
    cout << S1 << endl;
    //For --
    S1 = 0;
    k = 1;
    for (k = 20; k >= 1; k--) {
        S2 = 1;
        for (i = k; i >= 1; i--) {
            S2 += cos(i + k);
        }
        S1 += pow(sin(k), 2) + abs(S2);
    }
    cout << S1 << endl;
    return 0;
}

