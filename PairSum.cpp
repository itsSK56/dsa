// Pair Sum : Return pair in sorted array with target sum

#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int> v, int n, int target) {
    vector<int> ans;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(v[i] + v[j] == target) {
                ans.push_back(v[i]);
                ans.push_back(v[j]);
                break;
            }
        }
    }
    return ans;
}
int main() {
    vector<int> vec = {2, 7, 11, 15};
    vector<int> r;
    r = pairSum(vec, 4, 9);
    cout<<r[0]<<" "<<r[1];
    return 0;
}