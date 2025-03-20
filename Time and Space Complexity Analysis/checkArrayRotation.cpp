#include <bits/stdc++.h>
using namespace std;

int arrayRotateCheck(int *arr, int size) {
    int si = 0, ei = size - 1;
    while(si <= ei) {
        int mid = (si + ei) / 2;
        if(mid != size - 1 and arr[mid] > arr[mid + 1]) return mid + 1;
        else if(mid != 0 and arr[mid] < arr[mid - 1]) return mid;
        else if(arr[mid] < arr[ei]) ei = mid - 1;
        else if(arr[mid] > arr[si]) si = mid + 1; 
    }

    return 0;
}

int main() {
    int n;
    cin >> n;
    int* input = new int[n];
    for(int i = 0; i < n; i++) cin >> input[i];
    int index = arrayRotateCheck(input, n);
    cout << index << endl;
    delete [] input;
    return 0;
}