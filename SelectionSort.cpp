// Selection Sort 

#include<iostream>
using namespace std;
void selectionSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int smallest = i;
        for(int j=i; j<n; j++) {
            if(arr[smallest] > arr[j]) {
                smallest = j;
            }
        }
        swap(arr[i], arr[smallest]);
    }
}
void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout<<arr[i]<<" ";
}
int main() {
    int arr[] = {4, 1, 5, 2, 3};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}