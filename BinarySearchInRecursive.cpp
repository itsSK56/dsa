// Binary Search in Recursive form

#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> v, int target, int st, int end) {
    if(st<=end) {
        int mid = st + (end - st) / 2;
        if(target < v[mid]) 
            return binarySearch(v, target, st, mid - 1);
        else if (target > v[mid])
            return binarySearch(v, target, mid + 1, end);
        else
            return mid;
    }
    return -1;
}
int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    int tg;
    cout<<"\n Enter Target: ";
    cin>>tg;
    cout<<tg<<" at ";
    cout<<binarySearch(vec, tg, 0, vec.size() - 1);
    return 0;
}