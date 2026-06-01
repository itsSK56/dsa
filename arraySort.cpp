// Array Sorting

#include<iostream>
using namespace std;
void swap(int arr[], int i, int j) {
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void sort(int arr[], int n) {
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                swap(arr, i, j);
            }
        }
    }
}
int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    sort(arr, 5);
    for(int i=0; i<5; i++) {
        cout<<"\t"<<arr[i];
    }
    return 0;
}