// Majority Element (Brute Force)

#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> vec = {2, 1, 2, 1, 1};
    int mj = 5/2;
    for(int el: vec) {
        int freq = 0;
        for(int val: vec) {
            if(el == val) {
                freq++;
            }
        }
        if(freq > mj) {
            cout<<"Majority Element: "<<el;
            break;
        }
    }
    return 0;
}