#include <bits/stdc++.h>
using namespace std;

int pairSum(int *arr, int n, int num) {
    sort(arr, arr + n);
    int i = 0, j = n - 1;
    int pairSumCount = 0;
    while(i < j) {
        int sum = arr[i] + arr[j];
        if(sum > num) {
            j--;
        } else if(sum < num) {
            i++;
        } else {
            int si = i, ei = j;
            if(arr[si] == arr[ei]) {
                int totalElement = ei - si + 1;
                int currPairCount = ((totalElement) * (totalElement - 1)) / 2; 
                pairSumCount += currPairCount;
                break;
            } else {
                int currLeftEle = arr[si], currRightEle = arr[ei];
                while(arr[si] == currLeftEle) si++;
                while(arr[ei] == currRightEle) ei--;
                int totalElement = (si - i) * (j - ei);
                pairSumCount += totalElement;
            }

            i = si;
            j = ei;
        }
    }

    return pairSumCount;
}


int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int num;
    cin >> num;
    int output = pairSum(arr, n, num);
    cout << output << endl;
    delete [] arr;
    return 0;
}