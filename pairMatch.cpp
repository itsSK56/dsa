// Pair to match the number(target)

#include<iostream>
using namespace std;
int main() {
    int arr[] = {11, 2, 15, 7};
    int target = 9;
    for(int i=0; i<4; i++) { 
        int r = 0;
        for(int j=i+1; j<4; j++) {
            if(arr[i] > target) {
                r = arr[i] - arr[j];
                if(r == target) {
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                    break;
                }
            }
            else {
                r = arr[i] + arr[j];
                if(r == target) {
                    cout<<arr[i]<<" "<<arr[j];
                    break;
                }
            }
        }
    }
    return 0;
}