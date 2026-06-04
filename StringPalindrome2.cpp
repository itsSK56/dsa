#include<iostream>
#include<string>
using namespace std;
bool isAlphaNum(char ch) { //isalnum(ch )
    if(
       (ch>='a' && ch<='z') ||
       (ch>='A' && ch<='Z') ||
       (ch>='0' && ch<='9')
    ) {
        return true;
    }
    return false;
}
bool validPalindrome(string& str) {
    int st = 0, end = str.length() - 1;
    while(st < end) {
        if(!isAlphaNum(str[st])) {
            st++; 
            continue;
        }
        else if(!isAlphaNum(str[end])) {
            end--;
            continue;
        }
        if(tolower(str[st]) != tolower(str[end])) {
            return false;
        }
        st++, end--;
    }
    return true;
}
int main() {
    string str = "A man, a plan, a canal: Panama";
    cout<<validPalindrome(str);
    return 0;
}