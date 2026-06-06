#include<iostream>
#include<climits>
using namespace std;
int reverseInteger(int num) {
    int ans=0, m=10;
    while(num!=0) {
        int rem = num % 10;
        if(ans < INT_MIN/10 || ans > INT_MAX/10) {
            return 0;
        }
        ans = ans * 10 + rem;
        num /= 10;
    }
    return ans;
}
int main() {
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    cout<<reverseInteger(num);
    return 0;
}