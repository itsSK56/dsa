// Decimal to Binary

#include<iostream>
using namespace std;
int main() {
    int num, rem, pow = 1, r = 0, temp;
    cout<<"\n Enter Number: ";
    cin>>num;
    temp = num;
    while(num > 0) {
        rem = num % 2;
        r += rem * pow;
        pow *= 10;
        num = num / 2;
    }
    cout<<"\n Decimal to Binary: "<<temp<<" -> "<<r;
    return(0);
}