#include <bits/stdc++.h>
using namespace std;

void rotate(int *input, int d, int n) {
    while(d > n) d %= n;
    int* temp = new int[n];
    int k = 0;
    for(int i = d; i < n; i++) temp[k++] = input[i];
    for(int i = 0; i < d; i++) temp[k++] = input[i];
    for(int i = 0; i < n; i++) input[i] = temp[i];
    delete [] temp;
    return;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int d; 
    cin >> d;
    rotate(arr, d, n);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    delete [] arr;
    return 0;
}