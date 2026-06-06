#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s = "abcdefg";
    char ch = 'd';
    int i=0, pos, n=s.length();
    while(i < n && s[i] != ch) {
        i++;
    }
    if(i < n) {
        pos = i;
        reverse(s.begin(), s.begin()+pos+1);
    }
    cout<<s;
    return 0;
}