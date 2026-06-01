// Displaying unique elements from Array

#include<iostream>
using namespace std;
int main() {
    int arr[4] = {1, 2, 3, 1};
    for(int i=0; i<4; i++) {
        int count = 0;
        for(int j=0; j<4; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count == 1) {
                cout<<arr[i]<<"\t";
        }        
    }
    return 0;
}