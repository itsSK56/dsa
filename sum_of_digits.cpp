#include<iostream>
using namespace std;
int sumOfDigits(int n) {
    int d, sum=0;
    while(n != 0) {
        d = n % 10;
        sum += d;
        n = n / 10;
    }
    return sum;
}
int main() {
    int num;
    cout<<"\n Enter Number: ";
    cin>>num;
    cout<<"\n Sum of Digits: "<<sumOfDigits(num);
    return 0;
}