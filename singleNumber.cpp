// Single Number

#include<iostream>
#include<vector>
using namespace std;
int main() {
    int r = 0;
    vector<int> vec = {4, 1, 2, 1, 2};
    for(int e: vec) {
        r = r ^ e;
    }
    cout<<r;
    return 0;
}