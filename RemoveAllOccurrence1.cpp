#include<iostream>
#include<string>
using namespace std;
void remAllOuccur(string& str, string& part) {
    while(str.length() > 0 && str.find(part) < str.length()) {
        str.erase(str.find(part), part.length());
    }
}
int main() {
    string str = "daabcbaabcbc", part = "abc";
    remAllOuccur(str, part);
    cout<<str;
    return 0;
}