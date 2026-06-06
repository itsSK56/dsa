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
bool numIsPalindrome(int num) {
    int rev = reverseInteger(num);
    return rev == num ? true : false;
}
int main() {
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    if(numIsPalindrome(num)) {
        cout<<num<<" is Palindrome";
    }
    else {
        cout<<num<<" is not Palindrome";
    }
    return 0;
}