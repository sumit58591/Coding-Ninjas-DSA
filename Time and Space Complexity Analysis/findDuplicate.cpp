#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int* arr, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];
    int expectedSum = ((n - 2) * (n - 1)) / 2;
    return sum - expectedSum;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int duplicateValue = findDuplicate(arr, n);
    cout << duplicateValue << endl;
    return 0;
}