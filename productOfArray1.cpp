// Product of array except self (optimized approach for time complexity)

#include <iostream>
#include <vector>
using namespace std;
vector<int> productExceptSelf(vector<int> vec) {
    vector<int> ans(vec.size(), 1);
    vector<int> prefix(vec.size(), 1);
    vector<int> suffix(vec.size(), 1);
    for(int i=1; i<vec.size(); i++) {
        prefix[i] = vec[i - 1] * prefix[i - 1];
    }
    for(int i=vec.size()-2; i>=0; i--) {
        suffix[i] =  vec[i + 1] * suffix[i + 1];
    }
    for(int i=0; i<vec.size(); i++) {
        ans[i] = prefix[i] * suffix[i];
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