// Search in Rotated Sorted Array

#include<iostream>
using namespace std;
int rotatedSortedArraySearch(int arr[], int target, int n) {
    int st = 0, end = n - 1;
    while(st <= end) {
        int mid = st + (end - st) / 2;
        if (target == arr[mid])
            return mid;
        else if(arr[st] <= arr[mid]) {
            if(arr[st] <= target && arr[mid] > target) {
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }
        else  {
            if(arr[mid] < target && arr[end] >= target) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main() {
    int arr[] = {3, 4, 5, 6, 7, 0, 1, 2};
    int tg;
    cout<<"\n Enter Target: ";
    cin>>tg;
    cout<<tg<<" is at ";
    int n = sizeof(arr)/sizeof(int);
    cout<<rotatedSortedArraySearch(arr, tg, n);
    return 0;
}