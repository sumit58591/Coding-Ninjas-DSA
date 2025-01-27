#include<iostream>
#include<math.h>
using namespace std;

double geometricSum_helper(int k, long long &power) {
    if(k == 0) return 1;
    double smallOutput = geometricSum_helper(k - 1, power);
    double currCalc = 1 / (pow(2, k));
    power += 1;
    return smallOutput + currCalc;
}

double geometricSum(int k) {
    long long power = 1;
    double sum = geometricSum_helper(k, power);
    return sum;
}

int main () {
    int n;
    cin >> n;
    double geometricSumValue = geometricSum(n);
    cout << geometricSumValue << endl;
    return 0;
}