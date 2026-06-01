#include<iostream>
#include<vector>
#include<algorithm> //next_permutation()
using namespace std;
void nextPermutation(vector<int>& vec) {
    next_permutation(vec.begin(), vec.end());
}
void display(vector<int>& vec) {
    for(int el: vec) {
        cout<<el<<" ";
    }
}
int main()
{
    vector<int> vec = {1, 2, 5, 4, 3};
    nextPermutation(vec);
    display(vec);
    return 0;
}