/*  Pattern:-

1234
1234
1234
1234    */

/*#include<iostream>
using namespace std;
int main(){
    int row = 1;
    while(row<=4){
        int col = 1;
        while(col<=4){
            cout<<col<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}*/

#include<iostream>
using namespace std;
int main(){
    for(int row=1; row<=4; row++){
        for(int col=1; col<=4; col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return(0);
}