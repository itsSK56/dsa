#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int>& vec) {
    int pivot = -1;
    int n = vec.size();
    for(int i=n-2; i>=0; i--) {
        if(vec[i] < vec[i+1]) {
            pivot = i;
            break;
        }
    }
    if(pivot == -1) {
        int i=0, j=n-1;
        while(i<j) {
            swap(vec[i], vec[j]);
            i++;
            j--;
        } //reverse(vec.begin(), vec.end());
        return; 
    }
    for(int i=n-1; i>pivot; i--) {
        if(vec[pivot] < vec[i]) {
            swap(vec[pivot], vec[i]);
            break;
        }
    }
    
    /*int i = pivot + 1, j = n - 1;
    while(i<j) {
        swap(vec[i], vec[j]);
            i++;
            j--;
    }*/
   reverse(vec.begin() + pivot + 1, vec.end());
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