#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char str[] = {'S', 'a', 'n', 'i', 'y', 'a', '\0'};
    int n = strlen(str);
    int st = 0, end = n - 1;
    while(st <= end) {
        swap(str[st], str[end]);
        st++;
        end--;
    }
    for(int i=0; i<n; i++) {
        cout<<str[i]<<" ";
    }
    return 0;
}