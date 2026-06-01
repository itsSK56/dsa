#include<iostream>
using namespace std;
int fact(int num) {
    if(num==1 || num==0) {
        return 1;
    }
    return fact(num - 1) * num;
}
int main() {
    int in;
    cout<<"\n Enter to get factorial number: ";
    cin>>in;
    cout<<fact(in);
    return 0;
}