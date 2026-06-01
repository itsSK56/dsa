// Single Element Optimization: O(log n)

#include<iostream>
using namespace std;
int singleElement(int arr[], int n) {
    int st = 0, end = n - 1;
    while(st <= end) {
        int mid = st + (end - st) / 2;
        if(n == 1) {
            return arr[0];
        }
        else if(mid == 0 && arr[mid] != arr[mid + 1]) {
            return arr[mid];
        }
        else if(mid == n - 1 && arr[mid] != arr[mid - 1]) {
            return arr[mid];
        }
        else if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
            return arr[mid];
        else if(mid % 2 == 0) {
            if(arr[mid] == arr[mid - 1]) {
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }
        else {
            if(arr[mid] == arr[mid - 1]) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }
    return - 1;
}
int main() {
    int arr[] = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int n = sizeof(arr)/sizeof(int);
    cout<<singleElement(arr, n);
    return 0;
}