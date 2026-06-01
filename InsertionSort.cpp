// Insertion Sort

#include<iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int cur=arr[i], prev=i-1;
        while(prev>=0 && arr[prev]>cur) {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = cur;
    }
}
int main() {
    int arr[] = {4, 1, 5, 2, 3};
    int n = sizeof(arr)/sizeof(int);
    insertionSort(arr, n);
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}