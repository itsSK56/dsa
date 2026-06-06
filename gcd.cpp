// brute force

#include<iostream>
#include<climits>
using namespace std;
int gcd(int a, int b) {
    if(a==0) {
        return b;
    }
    else if(b==0) {
        return a;
    }
    if(a==b) {
        return a;
    }
    int ans = 1;
    for(int i=1; i<=min(a, b); i++) {
        if(a%i==0 && b%i==0) {
            ans = i;
        }
    }
    return ans;
}
int main() {
    int a, b;
    cout<<"Enter Number: ";
    cin>>a;
    cout<<"Enter Number: ";
    cin>>b;
    cout<<"GCD: "<<gcd(a, b);
    return 0;
}