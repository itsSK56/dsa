// Subarray Sum

#include<iostream>
using namespace std;
int main() {
    int n = 7;
    int arr[n] = {-3, -4, 5, 4, -1, 7, -8};
    cout<<"\n Subarray:-"<<endl;;
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int k=i; k<=j; k++) {
                cout<<arr[k]<<" ";
                sum += arr[k];
            }
            cout<<"("<<sum<<")";
            cout<<endl;
        }
    }
    cout<<"\n Maximum subarray: "<<(sizeof(arr)/sizeof(arr[0])) * ((sizeof(arr)/sizeof(arr[0])) + 1)/2.0;
    return 0;
}
