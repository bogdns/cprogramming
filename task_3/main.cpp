#include <iostream>
#include "math.h"

using namespace std;

double max(double a1, double b1) {
    return a1 > b1 ? a1 : b1;
}

double min(double a2, double b2) {
    return a2 < b2 ? a2 : b2;
}

void triangle() {
    double ovl, ovs, a, b, c, e;
    ovl = sqrt(1.79769e+307) / 3;
    ovs = sqrt(1.79769e-307);
    cin >> a >> b >> c;
    e = min(min(a, min(b, c)) * min(a, min(b, c)) * 0.00001, 1e-15);

    if (a <= 0 || b <= 0 || c <= 0) cout << "the side of the triangle must be >0";

    else if (a > ovl || b > ovl || c > ovl) cout << "OVERFLOW! Write smaller number(s)";

    else if (a < ovs || b < ovs || c < ovs) cout << "OVERFLOW! Write bigger number(s)";

    else if (abs(a * a + b * b + c * c - 2 * max(a, max(b, c)) * max(a, max(b, c))) < e) cout << "YES";

    else cout << "NO";
}

void quad() {
    double d, x1, x2, ovl, ovs, a, b, c, e;
    cin >> a >> b >> c;
    ovl = sqrt(1.79769e+307) / 2;
    ovs = sqrt(1.79769e-307) / 2;
    e = min(min(a, min(b, c)) * min(a, min(b, c)) * 0.00001, 1e-15);
    d = b * b - 4 * a * c;

    if (abs(a) > ovl || abs(b) > ovl || abs(c) > ovl) cout << "OVERFLOW! Write smaller number(s)" << endl;

    else if ((abs(a) < ovs && a != 0) || (abs(b) < ovs && b != 0) || (abs(c) < ovs && c != 0))
        cout << "OVERFLOW! Write bigger number(s)" << endl;

    else if (a == 0 && b == 0 && c == 0) cout << "x belongs to R" << endl;

    else if (d < 0 || (a == 0 && b == 0)) cout << "no solutions on R" << endl;

    else if (a == 0) cout << (-c) / b;

    else {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        if (abs(x1 - x2) > e) cout << x1 << endl << x2 << endl;
        else cout << x1 << endl;
    }
}

int main() {
    //triangle();
    while (true) quad();
    //quad();
}