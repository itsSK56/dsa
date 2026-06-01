// Smallest element from Array

#include<iostream>
using namespace std;
int main() {
    int arr[5] = {2, 4, 1, 8, 0};
    int s = arr[0];
    int sz = sizeof(arr) / sizeof(int);
    for(int i=0; i<sz; i++) {
        if(s > arr[i]) {
            s = arr[i];
        }
    }
    cout<<"\n Smallest: "<<s;
    return 0;
}