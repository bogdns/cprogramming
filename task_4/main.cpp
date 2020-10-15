#include <iostream>
#include "factorial.h"
#include "fibonacci.h"

using namespace std;

int main(){
    int n;
    while (true){
        cin >> n;
        factorial(n, 16);
        fibonacci(n, 16);
    }
    return 0;
}
