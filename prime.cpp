//prime

#include<iostream>
using namespace std;
int main(){
    int lim, i;
    cout<<"Enter Limit: ";
    cin>>lim;
    for(i=1; i<=lim; i++) {
        if(i < 2)  {
            continue;
        }
        bool prime = true;
        for(int j=2; j*j<=i; j++) {
            if(i % j == 0) {
                prime = false;
                break;
            }   
        }
        if(prime) {
            cout<<i<<"\t";
        }
    }
    return 0;
}