// Painter's Partition Problem

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool valid(vector<int> arr, int n, int m, int maxAllowedTime) {
    int p=1, time=0;
    for(int i=0; i<n; i++) {
        if(arr[i] > maxAllowedTime) {
            return false;
        }
        if(time+arr[i] <= maxAllowedTime) {
            time += arr[i];
        }
        else {
            p++;
            time = arr[i];
        }
    }
    return p<=m;
}
int minTimeToPaint(vector<int> arr, int n, int m) {
    if(m > n) {
        return -1;
    }
    int sum = 0, maxVal=INT_MIN;
    for(int i=0; i<n; i++) {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }
    int st=maxVal, end=sum, ans=-1;
    while(st<=end) {
        int mid = st + (end - st) / 2;
        if(valid(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            st = mid + 1;
        }
    }
    return ans;
}
int main() {
    vector<int> arr = {40, 30, 10, 20};
    int n=4, m=2;
    cout<<minTimeToPaint(arr, n, m);
    return 0;
}