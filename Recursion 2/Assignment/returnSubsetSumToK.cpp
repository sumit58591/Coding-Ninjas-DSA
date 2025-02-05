#include<iostream>
using namespace std;

int subsetSumToK(int input[], int n, int output[][50], int sum) {
    if(n == 0) {
        if(sum == 0) {
            output[0][0] = 0;
            return 1;
        }
        
        return 0;
    }

    int smallOutput1[100][50];
    int smallOutput2[100][50];
    int smallOutputSize1 = subsetSumToK(input + 1, n - 1, smallOutput1, sum);
    int smallOutputSize2 = subsetSumToK(input + 1, n - 1, smallOutput2, sum - input[0]);
    int k = 0;
    for(int i = 0; i < smallOutputSize1; i++) {
        for(int j = 0; j <= smallOutput1[i][0]; j++) {
            output[k][j] = smallOutput1[i][j];
        }
        k++;
    }

    for(int i = 0; i < smallOutputSize2; i++) {
        output[k][0] = smallOutput2[i][0] + 1;
        output[k][1] = input[0];
        for(int j = 1; j <= smallOutput2[i][0]; j++) {
            output[k][j + 1] = smallOutput2[i][j];
        }
        k++;
    }

    return k;
}

int main () {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int k;
    cin >> k;
    int output[100][50];
    int outputSize = subsetSumToK(arr, n, output, k);
    for(int i = 0; i < outputSize; i++) {
        for(int j = 1; j <= output[i][0]; j++) {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }

    delete [] arr;
    return 0;
}