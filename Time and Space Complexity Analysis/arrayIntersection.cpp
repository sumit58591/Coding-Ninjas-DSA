#include <bits/stdc++.h>
using namespace std;

void intersection(int* arr1, int* arr2, int n, int m) {
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    int i = 0, j = 0;
    while(i < n and j < m) {
        if(arr1[i] == arr2[j]) {
            cout << arr1[i] << " ";
            i++; j++;
        } else if(arr1[i] < arr2[j]) {
            i++;
        } else j++;
    }

    return;
}

int main() {
    int n, m;
    cin >> n >> m;
    int* arr1 = new int [n];
    int* arr2 = new int [m];
    for(int i = 0; i < n; i++) cin >> arr1[i];
    for(int i = 0; i < m; i++) cin >> arr2[i];
    intersection(arr1, arr2, n, m);
    delete [] arr1;
    delete [] arr2;
    return 0;
}