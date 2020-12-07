#include <iostream>
#include "sort.h"
#include <cstring>

using namespace std;

void print_m(int a[], int n) {
    cout << a[0];
    for (int i = 1; i < n; i++) {
        cout << ", " << a[i];
    }
}

void print_m(double a[], int n) {
    cout << a[0];
    for (int i = 1; i < n; i++) {
        cout << ", " << a[i];
    }
}

void print_m(char a[], int n) {
    cout << a[0];
    for (int i = 1; i < n; i++) {
        cout << ", " << a[i];
    }
}

void print_m(string a[], int n) {
    cout << a[0];
    for (int i = 1; i < n; i++) {
        cout << ", " << a[i];
    }
}
//Метод пузырька
void sort_b(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
    print_m(a, n);
}

void sort_b(double a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
    print_m(a, n);
}

void sort_b(char a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
    print_m(a, n);
}

void sort_b(string a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
    print_m(a, n);
}
//Метод выбора
void sort_s(int a[], int n) {
    int mn;
    for (int i = 0; i < n - 1; i++) {
        mn = i;
        for (int j = i; j < n; j++) {
            if (a[j] < a[mn]) {
                mn = j;
            }
        }
        swap(a[i], a[mn]);
    }
    print_m(a, n);
}

void sort_s(double a[], int n) {
    int mn;
    for (int i = 0; i < n - 1; i++) {
        mn = i;
        for (int j = i; j < n; j++) {
            if (a[j] < a[mn]) {
                mn = j;
            }
        }
        swap(a[i], a[mn]);
    }
    print_m(a, n);
}

void sort_s(char a[], int n) {
    int mn;
    for (int i = 0; i < n - 1; i++) {
        mn = i;
        for (int j = i; j < n; j++) {
            if (a[j] < a[mn]) {
                mn = j;
            }
        }
        swap(a[i], a[mn]);
    }
    print_m(a, n);
}

void sort_s(string a[], int n) {
    int mn;
    for (int i = 0; i < n - 1; i++) {
        mn = i;
        for (int j = i; j < n; j++) {
            if (a[j] < a[mn]) {
                mn = j;
            }
        }
        swap(a[i], a[mn]);
    }
    print_m(a, n);
}
//Метод вставки
void sort_i(int a[], int n) {
    int cur;
    int temp;
    for (int i = 1; i < n; i++) {
        cur = i;
        for (int j = i - 1; j > -1; j--) {
            if (a[j] < a[i]) {
                cur = j + 1;
                break;
            }
            cur = j;
        }
        temp = a[i];
        for (int j = i; j > cur; j--) {
            a[j] = a[j - 1];
        }
        a[cur] = temp;
    }
    print_m(a, n);
}

void sort_i(double a[], int n) {
    int cur;
    double temp;
    for (int i = 1; i < n; i++) {
        cur = i;
        for (int j = i - 1; j > -1; j--) {
            if (a[j] < a[i]) {
                cur = j + 1;
                break;
            }
            cur = j;
        }
        temp = a[i];
        for (int j = i; j > cur; j--) {
            a[j] = a[j - 1];
        }
        a[cur] = temp;
    }
    print_m(a, n);
}

void sort_i(char a[], int n) {
    int cur;
    char temp;
    for (int i = 1; i < n; i++) {
        cur = i;
        for (int j = i - 1; j > -1; j--) {
            if (a[j] < a[i]) {
                cur = j + 1;
                break;
            }
            cur = j;
        }
        temp = a[i];
        for (int j = i; j > cur; j--) {
            a[j] = a[j - 1];
        }
        a[cur] = temp;
    }
    print_m(a, n);
}

void sort_i(string a[], int n) {
    int cur;
    string temp;
    for (int i = 1; i < n; i++) {
        cur = i;
        for (int j = i - 1; j > -1; j--) {
            if (a[j] < a[i]) {
                cur = j + 1;
                break;
            }
            cur = j;
        }
        temp = a[i];
        for (int j = i; j > cur; j--) {
            a[j] = a[j - 1];
        }
        a[cur] = temp;
    }
    print_m(a, n);
}
//Быстрая сортировка
void sort_q(int a[], int n){

}

void sort_q(double a[], int n){

}

void sort_q(char a[], int n){

}

void sort_q(string a[], int n){

}
