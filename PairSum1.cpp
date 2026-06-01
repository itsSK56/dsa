// Pair Sum (Optimised) 

#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int> v, int n, int target) {
    vector<int> ans;
    int i=0, j=n-1;
    while(i < j) {
        int r = v[i] + v[j];
        if(r < target) {
            i++;
        }
        else if(r > target) {
            j--;
        }
        else {
            ans.push_back(v[i]);
            ans.push_back(v[j]);
            return ans;
        }
    }
}
int main() {
    vector<int> vec = {2, 7, 11, 15};
    vector<int> r;
    r = pairSum(vec, 4, 9);
    cout<<r[0]<<" "<<r[1];

    return 0;
}