// Binary to Decimal

#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int num, temp, rem, r = 0, n = 0;
    cout<<"\n Enter Binary Number: ";
    cin>>num;
    temp = num;
    while(num != 0) {
        rem = num % 10;
        r += rem * pow(2, n);
        n++;
        num = num / 10;
    }
    cout<<"\n Binart yo Decimal: "<<temp<<" -> "<<r;
    return(0);
}