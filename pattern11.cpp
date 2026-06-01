/* Inverted Triangle Pattern:-
1 1 1 1
2 2 2
3 3 
4      */

#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<4; i++){
        for(int j=(4-i); j>0; j--){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=4; i++){
        for(int j=4; j>=i; j--){
            cout<<i;
        }
        cout<<endl;
    }
}
*/