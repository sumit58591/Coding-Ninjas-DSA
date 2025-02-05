#include<bits/stdc++.h>
using namespace std;

void printSubsetsOfArray(int input[], int size, int output[], int m) {
    if(size == 0) {
        for(int i = 0; i < m; i++) cout << output[i] << " ";
        cout << endl; 
        return;
    }

    printSubsetsOfArray(input + 1, size - 1, output, m);
    output[m] = input[0];
    printSubsetsOfArray(input + 1, size - 1, output, m + 1);
} 


void printSubsetsOfArray(int input[], int size) {
    int* output = new int[size];
    int m = 0;
    printSubsetsOfArray(input, size, output, m);
    delete [] output;
}

int main () {
    int n;
    cin >> n;
    int* input = new int[n];
    for(int i = 0; i < n; i++) cin >> input[i];
    printSubsetsOfArray(input, n);
    delete [] input;
    return 0;
}