#include<iostream>
using namespace std;

void printSubsetSumToK_helper(int input[], int size, int k, int output[], int outputSize) {
    if(size == 0) {
        if(k == 0) {
            for(int i = 0; i < outputSize; i++) cout << output[i] << " ";
            cout << endl;
            return;
        }
        return;
    }

    printSubsetSumToK_helper(input + 1, size - 1, k, output, outputSize);
    output[outputSize] = input[0];
    printSubsetSumToK_helper(input + 1, size - 1, k - input[0], output, outputSize + 1);
    return;
}

void printSubsetSumToK(int input[], int size, int k) {
    int *output = new int[size];
    int outputSize = 0;
    printSubsetSumToK_helper(input, size, k, output, outputSize);
    delete [] output;
    return;
}

int main () {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int k;
    cin >> k;
    printSubsetSumToK(arr, n, k);
    delete [] arr;
    return 0;
}