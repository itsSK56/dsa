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
    else if(a == b) {
        return a;
    }
    else if(a>b) {
        return gcd(a%b, b);
    }
    return gcd(a, b%a);
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int main() { 
    int a, b;
    cout<<"Enter Number: ";
    cin>>a;
    cout<<"Enter Number: ";
    cin>>b;
    cout<<"LCM: "<<lcm(a, b);
    return 0;
}