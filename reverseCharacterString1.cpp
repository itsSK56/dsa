#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main() {
    char str[] = {'S', 'a', 'n', 'i', 'y', 'a', '\0'};
    int n = strlen(str);
    reverse(str, str + n);
    for(int i=0; i<n; i++) {
        cout<<str[i]<<" ";
    }
    return 0;
}