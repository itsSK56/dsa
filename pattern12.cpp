/* Inverted Triangle Pattern:-
A A A A
B B B 
C C
D       */

#include<iostream>
using namespace std;
int main(){
    char ch = 'A';
    for(int i=4; i>0; i--){
        for(int j=i; j>0; j--){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
    return(0);
}