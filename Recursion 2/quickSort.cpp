#include<iostream>
using namespace std;

int partitionArray(int input[], int start, int end) {
    int firstElement = input[start], i = start, j = end + 1;
    int partitionIndex = start;
    do {
        do {
            i++;
        } while(input[i] < firstElement and i <= j);

        do {
            j--;
        } while(input[j] >= firstElement and i <= j);

        if(i < j) {
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
        }
    } while(i < j);

    input[start] = input[j];
    input[j] = firstElement;
    return j;
}

void quickSort(int input[], int start, int end) {
    if(start >= end) return;
    int partition = partitionArray(input, start, end);
    quickSort(input, start, partition - 1);
    quickSort(input, partition + 1, end);
    return;
}

int main () {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    quickSort(arr, 0, n - 1);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    delete [] arr;
    return 0;
}