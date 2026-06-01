/* Pyramid Pattern:-
        1
      1 2 1 
    1 2 3 2 1
  1 2 3 4 3 2 1      */

#include<iostream>
using namespace std;
int i, j;
int main(){
    for(i=1; i<=4; i++){
        for(int j=1; j<=4-i; j++){
            cout<<" "<<" ";
        }
        for(j=1; j<=i; j++){
            cout<<j<<" ";
        }
        j = j - 2;
        for(; j>0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// j=1 => j++ => j=2 => j=j-2 => j=2-2 => j=0

/*
#include<iostream>
using namespace std;
int main() {
    int i, j;
    for(i=1; i<=4; i++){
        for(j=(4 - i); j>=1; j--){
            cout<<"  ";
        }
        for(j=1; j<=i; j++) {
            cout<<j<<" ";
        }
        if(i != 1) {
            for(j=(i-1); j>=1; j--) {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/