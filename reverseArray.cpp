// Reverse an Array

#include<iostream>
using namespace std;
void swap(int arr[], int i, int j) {
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void reverse(int arr[], int s) {
    int start=0, end=s - 1;
    while(start < end) {
        swap(arr, start, end);
        start++;
        end--;
    }
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    reverse(arr, size);
    cout<<"Reverse Array:-";
    for(int i=0; i<size; i++) {
        cout<<"\n"<<arr[i];
    }
    return 0;
}