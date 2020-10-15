#include "fibonacci.h"
#include <iostream>
#include <cmath>

using namespace std;

double fib_cycle(int x) {
    double a, b;
    a = 0;
    b = 1;
    for (int i = 0; i < x; i++) {
        b += a;
        swap(a, b);
    }
    return a;
}

double fib_rec(int x) {
    if (x == 1 || x == 2) return 1;

    else return fib_rec(x - 1) + fib_rec(x - 2);
}

double fib_bin(int x) {
    double phi = (1+sqrt(5))/2;
    return (pow(phi,x) - pow(phi-1,x))/sqrt(5);
}

void fibonacci(int n, int prec) {
    if (n > 1474) cout << "Write less number. Overflow." << endl;

    else if (n < 1) cout << "Doesn't exist. Try to write bigger number" << endl;

    else {
        if (n > 40){
            cout << "WARNING! Too long for recursion.\nIf you want to continue, write 'y'.\nIf you want to count without recursion, write 'w'"<< endl;
            char w;
            cin >> w;
            if (w == 'y') {
                cout.precision(prec);
                cout << "Cycle:     "<<fib_cycle(n) << endl << "Recursion: " << fib_rec(n) << endl << "Binet:     "<< fib_bin(n) << endl;
            }
            else {
                cout.precision(prec);
                cout << "Cycle:     " <<fib_cycle(n) << endl << "Binet:     " << fib_bin(n) << endl;
            }
        }
        else {
            cout.precision(prec);
            cout << "Cycle:     "<<fib_cycle(n) << endl << "Recursion: " << fib_rec(n) << endl << "Binet:     "<< fib_bin(n)<< endl;
        }
    }
}