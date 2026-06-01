//prime

#include<iostream>
using namespace std;
int main(){
    int lim, num;
    cout<<"\n Enter Limit: ";
    cin>>lim;
    for(num=1; num<=lim; num++) {
        int cnt = 2;
        int flag = 1;
        while(cnt < num) {
            if(num % cnt == 0) {
                flag = 0;
                break;
            }
            cnt++;    
        }
        if(flag == 1) {
            cout<<num<<"\t";
        }
    }
    return 0;
}