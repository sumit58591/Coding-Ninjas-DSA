#include<iostream>
using namespace std;

int countZeros(int n) {
    if(n == 0) return 1;
    if(n < 10) return 0;
    int output = countZeros(n / 10);
    if(n % 10 == 0) output++;
    return output;
}

int main () {
    int n;
    cin >> n;
    int zerosCount = countZeros(n);
    cout << zerosCount << endl;
    return 0;
}