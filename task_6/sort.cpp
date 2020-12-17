#include <iostream>
#include "sort.h"
#include <string>
#include <vector>

using namespace std;

void print_m(vector<string> &a, int n) {
    cout << a[0];
    for (int i = 1; i < n; i++) {
        cout << ", " << a[i];
    }
}

//Метод пузырька
void sort_b(vector<string> &a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

//Метод выбора
void sort_s(vector<string> &a, int n) {
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
}

//Метод вставки
void sort_i(vector<string> &a, int n) {
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
}

//Быстрая сортировка
void sort_q(vector<string> &a, int l, int r) {
    if (r > l) {
        int R = r;
        int L = l;
        string m = a[(l + r) / 2];
        while (r >= l) {
            while (a[l] < m && l <= r) l++;
            while (a[r] > m && r >= l) r--;
            if (l<=r) {
                swap(a[l], a[r]);
                l++;
                r--;
            }
        }
        sort_q(a, L, r);
        sort_q(a, l, R);
    }

}