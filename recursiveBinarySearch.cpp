// Recursive Binary Search

#include<iostream>
#include<algorithm>
using namespace std;
int binarySearch(int arr[], int i, int j, int target) {
    if(i<=j) {
        int mid = i + (j-i) / 2;
        if(arr[mid] > target) {
            return binarySearch(arr, i, mid-1, target);
        }
        else if(arr[mid] < target) {
            return binarySearch(arr, mid+1, j, target);
        }
        else {
            return mid;
        }
    }
    return -1;
}
int main() {
    int arr[] = {2, 7, 5, 1};
    int n = sizeof(arr)/sizeof(int);
    sort(arr, arr+n);
    int target = 7;
    int i=0, j=n-1;
    cout<<binarySearch(arr, i, j, target)<<endl;
    return 0;
}