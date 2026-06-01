// Largest Element from Array

#include<iostream>
using namespace std;
int main() {
    int arr[5] = {2, 3, 6, 10, 4};
    int sz = sizeof(arr)/sizeof(int);
    int l = arr[0];
    for(int i=0; i<sz; i++) {
        if(l < arr[i]) {
            l = arr[i];
        }
    }
    cout<<"\n Largest: "<<l;
    return 0;
}