// Majority Element (Moore's Voting algoritm)

#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> vec = {2, 1, 2, 1, 1};
    int ans=0, freq=0, n=5;
    for(int el: vec) {
        if(freq == 0) {
            ans = el;
        }
        else if(ans == el) {
            freq++;
        }
        else {
            freq--;
        }
    }
    int count = 0;
    for(int el: vec) {
        if(ans == el) {
            count++;
        }
    }
    if(count > n/2) {
        cout<<"\n Majority Element: "<<ans;
    }
    else {
        cout<<"\n majority Element: "<<-1;
    }

    return 0;
}