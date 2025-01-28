#include<iostream>
using namespace std;

void mergeSortedArray(int arr[], int l, int mid, int r) {
    int i = l, j = mid + 1, k = l;
    int *temp = new int[l + r + 1];
    while(i <= mid and j <= r) {
        if(arr[i] < arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }

    while(i <= mid) temp[k++] = arr[i++];
    while(j <= r) temp[k++] = arr[j++];
    for(int i = l; i <= r; i++) arr[i] = temp[i];
    delete [] temp;
    return;
}

void mergeSort(int arr[], int l, int r) {
    if(l >= r) return;
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    mergeSortedArray(arr, l, mid, r);
    return;
}

int main () {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    mergeSort(arr, 0, n - 1);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    delete [] arr;
    return 0;
}