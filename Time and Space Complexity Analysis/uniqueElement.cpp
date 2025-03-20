#include <bits/stdc++.h>
using namespace std;

int findUnique(int* arr, int n) {
    int uniqueElement = 0;
    for(int i = 0; i < n; i++) uniqueElement ^= arr[i];
    return uniqueElement;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int output = findUnique(arr, n);
    cout << output << endl;
}