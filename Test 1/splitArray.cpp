#include<bits/stdc++.h>
using namespace std;

bool splitArray(int* input, int size, int leftSum, int rightSum) {
    if(size == 0) {
        if(leftSum == rightSum) return true;
        return false;
    }

    if(input[0] % 5 == 0) return splitArray(input + 1, size - 1, leftSum + input[0], rightSum);
    else if(input[0] % 3 == 0) return splitArray(input + 1, size - 1, leftSum, rightSum + input[0]);
    else return splitArray(input + 1, size - 1, leftSum, rightSum + input[0]) or 
                splitArray(input + 1, size - 1, leftSum + input[0], rightSum);
}

bool splitArray(int *input, int size) {
    int leftSum = 0, rightSum = 0;
    splitArray(input, size, leftSum, rightSum);
}

int main () {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    bool output = splitArray(arr, n);
    if(output) cout << "true" << endl;
    else cout << "false" << endl;
    delete [] arr;
    return 0;
}