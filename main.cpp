#include <iostream>
using namespace std;

int main() {
    int n = 0, num1 = 1, num2 = 1, somma = 0;
    cout << "Inserire il valore fino al quale si vuole calcolare la serie di Fibonacci:" << endl;
    cin >> n;
    if(n == 1) {
        cout << 1 << endl;
        cout << 1 << endl;
    }else {
        cout << 1 << endl;
        cout << 1 << endl;
        while(somma <= n) {
            somma = num1 + num2;
            if(somma <= n) {
                cout << somma << endl;
                num1 = num2;
                num2 = somma;
            }
        }
    }
    return 0;
}

