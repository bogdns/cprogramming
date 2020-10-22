#include <iostream>

using namespace std;

int bin_num(unsigned int a, char k = '0', unsigned b = 0) {
    unsigned int i, c;
    //4294967295 1
    //4000000000 4000000001
    i = (1 << 31);
    if (k == '-') {
        if (b > a) {
            swap(a, b);
            cout << '-';
        }
        c = a - b;
    } else {
        c = a + b;
        if (c < a && c < b) {
            cout << 1;
            k = '1';
        }
    }

    if (k != '1') {
        while ((c & i) == 0 && i != 0) {
            i >>= 1;
        }
    }
    if (i == 0) {
        cout << 0;
        cout << endl;
        return 0;
    } else {
        while (i != 0) {
            cout << ((c & i) == 0 ? 0 : 1);
            i >>= 1;
        }
    }


    cout << endl;
    return 0;
}

int main() {
    unsigned int a, b;
    cin >> a >> b;
    bin_num(a);
    bin_num(b);
    bin_num(a, '+', b);
    bin_num(a, '-', b);
}