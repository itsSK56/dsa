#include<iostream>
using namespace std;
void sort(int arr[], int n) {
    int mid=0, high=n-1, low=0;
    while(mid<=high) {
        if(arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
void display(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[] = {1, 0, 2, 2, 0, 1, 1, 0};
    int n = sizeof(arr) / sizeof(int);
    sort(arr, n);
    display(arr, n);
    return 0;
}