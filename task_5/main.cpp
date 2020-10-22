#include <iostream>
using namespace std;
/* 0 вариант
 * написать "Hello [введенная строка]"
 * 1 вариант
 * если строка не длиннее 50 символов, вывести ее в обратном порядке, иначе ничего не выводить
 * 01234567891011121314151617181920212223242526272829
 */
void hello(char s[52]){
    cout << "Hello " << s << endl;
}
void revers(char s[52]){
    if (s[50] == '\0'){
        int i = _mbstrlen(s)-1;
        for (int k = 0; k<(i+1)/2; k++){
            swap(s[k],s[i-k]);
        }
        cout << s << endl;
    }
}


int main() {
    char a[52] =""; // если убрать?
    cin.width(52);
    cin >> a;
    hello(a);
    revers(a);

    return 0;
}
