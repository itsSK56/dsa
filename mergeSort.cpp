#include<iostream>
using namespace std;
void merge(int arr[], int lb, int mid, int ub) {
    int i = lb, j = mid + 1, k = lb, temp[ub+1];
    while(i<=mid && j<=ub) {
        if(arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        }
        else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    if(i>mid) {
        while(j<=ub) {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    else {
        while(i<=mid) {
            temp[k] = arr[i];
            i++;
            k++;
        }
    }
    for(int i=lb; i<=ub; i++) {
        arr[i] = temp[i];
    }
} 
void mergeSort(int arr[], int low, int high) {
    if(low < high) {
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
void display(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[] = {4, 1, 5, 2, 7, 6, 3};
    int n = sizeof(arr) / sizeof(int);
    mergeSort(arr, 0, n-1);
    display(arr, n);
    return 0;
}