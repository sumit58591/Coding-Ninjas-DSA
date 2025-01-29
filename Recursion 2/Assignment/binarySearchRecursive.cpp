#include<iostream>
using namespace std;

int binarySearch_helper(int arr[], int si, int ei, int element) {
    if(si > ei) return -1;
    int mid = (si + ei) / 2;
    if(arr[mid] == element) return mid;
    if(arr[mid] > element) return binarySearch_helper(arr, si, mid - 1, element);
    else return binarySearch_helper(arr, mid + 1, ei, element);
}

int binarySearch(int input[], int size, int element) {
    int si = 0, ei = size - 1;
    int output = binarySearch_helper(input, si, ei, element);
    return output;
}

int main () {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int x;
    cin >> x;
    int output = binarySearch(arr, n, x);
    cout << output << endl;
    return 0;
}