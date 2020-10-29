#include <iostream>
#include <cstring>
#include "sort.h"

using namespace std;

int main() {
    int const n = 5;
    int a[n] = {5, 2, 3, 1, 4};
    double b[n] = {1.5, 1.3, 1.2, 1.4, 1.1};
    char c[n] = {'e','c','h','a','m'};
    string d[n] = {"ab","aab","b","aac","ahh"};
    sort_i(a,n);
    cout<<endl;
    sort_i(b,n);
    cout<<endl;
    sort_i(c,n);
    cout<<endl;
    sort_i(d,n);
}