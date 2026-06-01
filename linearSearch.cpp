// Linear Search 

#include<iostream>
using namespace std;
int main() {
    int arr[5] = {10, 50, 30, 40, 20};
    int size = sizeof(arr) / sizeof(int);
    int target, i;
    cout<<"\n Enter Element to be Searched: ";
    cin>>target;
    for(i=0; i<size; i++) {
        if(target == arr[i]){
            cout<<"\n Element at "<<i;
            break;
        }
    }
    if(i == size) {
        cout<<"\n Element at "<<-1;
    }
    return 0;
}