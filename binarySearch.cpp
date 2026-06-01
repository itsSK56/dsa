// Binary Search 
#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;
int binarySearch(vector<int> vec, int n, int target) {
    sort(vec.begin(), vec.end());
    int st=0, end=n-1;
    while(st<=end) {
        int mid = (st + end)/2;
        if(target > vec[mid]) {
            st = mid + 1;
        }
        else if(target < vec[mid]) {
            end = mid - 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}
int main() {
    vector<int> vec = {3, 1, 5, 2, 4};
    int target;
    cout<<"\n Enter Element to Search: ";
    cin>>target;
    int n = vec.size();
    cout<<binarySearch(vec, n, target);
    return 0;
}