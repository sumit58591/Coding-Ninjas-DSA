#include<bits/stdc++.h>
using namespace std;

int allIndexes(int input[], int size, int x, int output[]) {
    if(size == 0) return 0;
    int smallOutputSize = allIndexes(input + 1, size - 1, x, output);
    if(input[0] == x) {
        for(int i = smallOutputSize - 1; i >= 0; i--) output[i + 1] = output[i] + 1;
        output[0] = 0;
        smallOutputSize++;
    } else {
        for(int i = 0; i < smallOutputSize; i++) output[i]++;
    }

    return smallOutputSize;
}

int main () {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int x;
    cin >> x;
    int* output = new int[n];
    int outputSize = allIndexes(arr, n, x, output);
    for(int i = 0; i < outputSize; i++) cout << output[i] << " ";
    delete [] arr;
    delete [] output;
    return 0;
}