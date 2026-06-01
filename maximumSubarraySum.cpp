// Maximm Subarray Sum

#include<iostream>
#include<vector>
#include <climits>  //INT_MIN
using namespace std;
int main() {
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int maxSum = INT_MIN;
    for(int st=0; st<n; st++) {
        int curSum = 0;
        for(int end=st; end<n; end++) {
            curSum += arr[end];
            maxSum = max(curSum, maxSum);
        }
    }
    cout<<" Max Subarray Sum: "<<maxSum;
    return 0;
}