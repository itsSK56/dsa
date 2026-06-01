// Check that a number is Palindrome or not

#include<iostream>
using namespace std;
bool isPalindrome(int num) {
    string str = to_string(num);
    int i = 0, j = str.length() - 1;
    while(i < j) {
        if(str[i] == str[j]) {
            i++;
            j--;
        }
        else {
            false;
        }
    }
    return true;
}
int main() {
    int num;
    cout<<"Enter Number:";
    cin>>num;
    bool r = isPalindrome(num);
    if(r) {
        cout<<"Number is Palindrome: true";
    }
    else {
        cout<<"Number is Palindrome: false";
    }
    return 0;
}