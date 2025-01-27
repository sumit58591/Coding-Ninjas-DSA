#include<iostream>
using namespace std;

int multiplyNumbers(int m, int n) {
    if(n == 0) return n;
    return m + (multiplyNumbers(m, n - 1));
}

int main () {
    int x, y;
    cin >> x >> y;
    int product = multiplyNumbers(x, y);
    cout << product;
    return 0;
}