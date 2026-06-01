// Majority Element (Optimised)

#include<iostream>
#include<vector>
#include <algorithm> // sort()
using namespace std;
int main() {
    vector<int> vec = {2, 1, 2, 1, 2};
    sort(vec.begin(), vec.end());
    int mj = 5 / 2;
    int freq = 1;
    for(int i=0; i<5; i++) {
        if(vec[i] == vec[i + 1]) {
            freq++;
        }
        else{
            if(mj < freq) {
                cout<<" Majority Elemnt: "<<vec[i];
                break;
            }
            freq = 1;
        }
    }
    return(0);
}