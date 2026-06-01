#include<iostream>
using namespace std;
void sort(int arr[], int n) {
    int cnt0=0, cnt1=0, cnt2=0; 
    for(int i=0; i<n; i++) {
        if(arr[i] == 0) {
            cnt0++;
        }
        else if(arr[i] == 1) {
            cnt1++;
        }
        else {
            cnt2++;
        }
    }
    int i = 0;
    while(true) {
        if(cnt0 > 0) {
            arr[i] = 0; 
            cnt0--;
        }
        else if(cnt1 > 0) {
            arr[i] = 1;
            cnt1--;
        }
        else if(cnt2 > 0) {
            arr[i] = 2;
            cnt2--;
        }
        else {
            return;
        }
        i++;
    }
}
void display(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[] = {2, 0, 1, 2, 2, 1, 0, 1};
    int n = sizeof(arr) / sizeof(int);
    sort(arr, n);
    display(arr, n);
    return 0;
}