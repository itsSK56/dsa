//Seperate the Digits in an Array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> s;
    vector<int> nums = {1234, 12};
    for(int num: nums) {
        vector<int> temp;
        while(num > 0) {
            int rem = num % 10;
            temp.push_back(rem);
            num /= 10;
        }
        reverse(temp.begin(), temp.end());
        s.insert(s.end(), temp.begin(), temp.end());
    }
    cout<<"answer: ";
    for(int el: s) {
        cout<<el<<" ";
    }
}