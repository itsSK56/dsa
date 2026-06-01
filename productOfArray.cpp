// Product of array except self (Brute Force)

#include <iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int> vec) {
    vector<int> ans;
    for(int i=0; i<vec.size(); i++) {
        int p = 1;
        for(int j=0; j<vec.size(); j++) {
            if(i != j) {
                p *= vec[j];
            }
        }
        ans.push_back(p);
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