// Peak Index in Mountain Array

#include<iostream>
using namespace std;
int peakInMountainArray(int ma[], int n) {
    int st = 1, end = n - 2;
    while(st<=end) {
        int mid = st + (end  - st) / 2;
        if(ma[mid - 1] < ma[mid] &&  ma[mid + 1] < ma[mid]) 
            return mid;
        else if(ma[mid] > ma[mid - 1]) 
            st = mid + 1;
        else 
            end = mid - 1;
    }
    return -1;
}
int main() {
    int ma[] = {0, 3, 8, 9, 5, 2};
    int n = sizeof(ma)/sizeof(int);
    cout<<"Peek at ";
    cout<<peakInMountainArray(ma, n);
    return 0;
}