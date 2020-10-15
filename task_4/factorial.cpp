#include "factorial.h"
#include <math.h>
#include <iostream>

using namespace std;

double fact_cycle(int x) {
    double res = 1;
    for (int i = 2; i < x + 1; i++) res *= i;
    return res;
}

double fact_rec(int x) {
    if (x == 0) return 1;

    else return fact_rec(x - 1) * x;
}

double fact_stir(int x) {
    return sqrt(2 * 3.14159 * x) * pow(x / exp(1), x);
}

void factorial(int n) {
    if (n > 170) cout << "Write less number. Overflow." << endl;

    else if (n < 0) cout << "Doesn't exist. Try to write bigger number" << endl;

    else {
        cout << "Cycle:     " << fact_cycle(n) << endl << "Recursion: " << fact_rec(n) << endl << "Stirling:  "
             << fact_stir(n) << endl;
    }
}