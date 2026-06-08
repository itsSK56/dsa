//square pattern

#include<iostream>
using namespace std;
int main() {
    int i, j, n=6;
    cout<<"\n Enter Limit: ";
    cin>>n;
    for(i=1; i<=n; i++) {
        if(i == 1 || i == n) {
            for(j=1; j<=n; j++) {
                cout<<"* ";
            }
        }
        else {
            for(j=1; j<=1; j++) {
                cout<<"* ";
            }
            for(j=1; j<=n-2; j++) {
                cout<<"  "; 
            }
            for(j=1; j<=1; j++) {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}