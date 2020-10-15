#include <iostream>
#include "factorial.h"
#include "fibonacci.h"

using namespace std;

int main(){
    int n;
    while (true){
        cin >> n;
        factorial(n);
        //fibonacci(n);
    }
    return 0;
}
