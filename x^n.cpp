// Binary Exponent for Power

#include<iostream>
using namespace std;
int convBiNum(int deci) {
    int rem, m=1, biNum=0;
    while(deci > 0) {
        rem = deci % 2;
        biNum +=  rem * m;
        m *= 10;
        deci /= 2;
    }
    return biNum;
}
int power(int base, int expo) {
    if(base == 0) {
        return 0;
    }
    else if(base == 1) {
        return 1;
    }
    else if(expo == 0) {
        return 1;
    }
    else if(expo == 1) {
        return base;
    }
    else if(base == -1 && expo % 2 == 0) {
        return 1;
    }
    else if(base == -1 && expo % 2 != 0) {
        return -1;
    }
    expo = convBiNum(expo);
    int ans = 1;
    while(expo > 0) {
        if(expo % 10 == 1) {
            ans *= base;
        }
        base *= base;
        expo /= 10;
    }
    return ans;
}
int main() {
    int base, expo;
    cout<<"\n Enter Base: ";
    cin>>base;
    cout<<"\n Enter Exponent: ";
    cin>>expo;
    cout<<"\n ("<<base<<")^"<<expo<<" = "<<power(base, expo);
    return 0;
}