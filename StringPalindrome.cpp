#include<iostream>
#include<string>
using namespace std;
int main() {
    string str = "racecar";
    int n = str.length();
    int st = 0, end = n - 1;
    bool palindrome = true;
    while(st <= end) {
        if(str[st] == str[end]) {
            st++;
            end--;
        }
        else {
            palindrome = false;
        }
    }
    cout<<palindrome;
    return 0;
}