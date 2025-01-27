#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    if(n < 10) return 1;
    return 1 + countDigits(n / 10);
}

int main() {
    int n;
    cin >> n;
    int output = countDigits(n);
    cout << output << endl;
    return 0;
}