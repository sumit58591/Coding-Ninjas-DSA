#include<bits/stdc++.h>
using namespace std;

int firstIndex_helper(int arr[], int si, int ei, int x) {
    if(si >= ei) return -1;
    if(arr[si] == x) return si;
    return firstIndex_helper(arr, si + 1, ei, x);
}

int firstIndex(int arr[], int size, int x) {
    int si = 0, ei = size - 1;
    int output = firstIndex_helper(arr, si, ei, x);
    return output;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int x;
    cin >> x;
    int output = firstIndex(arr, n, x);
    cout << output << endl;
    delete [] arr;
    return 0;
}