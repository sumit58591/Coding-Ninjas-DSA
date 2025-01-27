#include<bits/stdc++.h>
using namespace std;

bool checkNumber(int arr[], int size, int x) {
    if(size == 0) return false;
    if(arr[size - 1] == x) return true;
    return checkNumber(arr, size - 1, x);
}


int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int x;
    cin >> x;
    bool output = checkNumber(arr, n, x);
    if(output) cout << "true";
    else cout << "false";
    return 0;
}