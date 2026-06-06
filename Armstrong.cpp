#include<iostream>
using namespace std;
bool armstrong(int num) {
    int temp = num;
    int ans=0;
    while(temp > 0) {
        int rem = temp % 10;
        ans += rem * rem * rem;
        temp /= 10;
    }
    if(ans == num) {
        return true;
    }
    return false;
}
int main() {
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    if(armstrong(num)) {
        cout<<num<<" is armstrong";
    }
    else {
        cout<<num<<" is not armstrong";
    }
    return 0;
}