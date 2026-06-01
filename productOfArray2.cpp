// Product of array except self (optimized approach for time and space complexity)

#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int> vec) {
    int n = vec.size();
    vector<int> ans(n, 1);
    for(int i=1; i<n; i++) {
        ans[i] = vec[i-1] * ans[i-1];
    }
    int suffix = 1;
    for(int i=n-2; i>=0; i--) {
        suffix *= vec[i+1];
        ans[i] *= suffix;
    }
    return ans;
}
int main() {
    vector<int> vec = {1, 2, 3, 4};
    vector<int> ans;
    ans = productExceptSelf(vec);
    for(int e: ans) {
        cout<<e<<" ";
    }
    return 0;
} 