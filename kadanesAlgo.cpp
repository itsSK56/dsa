// Kadane's Algorithm for Maximum Subarray Sum 

#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n = 7;
    int arr[n] = {-3, -4, 5, 4, -1, 7, -8};
    int maxSum = INT_MIN;
    int curSum = 0;
    for(int i=0; i<n; i++) {
        curSum += arr[i];
        maxSum = max(curSum, maxSum);
        if(curSum < 0) {
            curSum = 0;
        }
    }
    return 0 ;
}