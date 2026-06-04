#include<iostream>
#include<string>
using namespace std;
void remAllOuccur(string& str, string& part) {
    int n = part.length();
    while(true) {
        int st = str.find(part);
        if(st < str.length()) {
            str.erase(st, n);
        }
        else {
            return;
        }
    }
}
int main() {
    string str = "daabcbaabcbc", part = "abc";
    remAllOuccur(str, part);
    cout<<str;
    return 0;
}