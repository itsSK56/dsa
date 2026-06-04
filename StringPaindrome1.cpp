#include<iostream>
#include<string>
using namespace std;
int main() {
    string s = "A man, a plan, a canal: Panama";
    int n = s.length();
    string temp;
    for(int i=0; i<n; i++) {
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i] >= '0' && s[i] <= '9') {
            if(s[i]>='A' && s[i]<='Z') {
                s[i] += 32;
            }
            temp += s[i];
        }
    }
    n = temp.length();
    int st = 0, end = n - 1;
    bool palindrome = true;
    while(st <= end) {
        if(temp[st] == temp[end]) {
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