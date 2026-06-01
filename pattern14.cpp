// Hallow Diamond Pattern:-

#include<iostream>
using namespace std;
int main(){
    int i, j;
    for(i=0; i<4; i++){
        for(j=0; j<(4 - i - 1); j++){
            cout<<" ";
        }
        cout<<"*";
        if(i != 0){
            for(j=0; j<(2 * i - 1); j++){
                    cout<<" "; 
            }
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=0; i<(4 - 1); i++){
        for(j=0; j<(i + 1); j++){
            cout<<" ";
        }
        cout<<"*";
        if(i != (4 - 2)){
            for(j=0; j<2*(4 - i) - 5; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    
    cout<<endl;
    return 0;
}

/*
#include<iostream>
using namespace std;
int main() {
    int i, j;
    for(i=1; i<=4; i++) {
        for(j=(4-i); j>=1; j--) {
            cout<<" ";
        }
        cout<<"*";
        if(i!=1) {
            for(j=1; j<=2*(i-2)+1; j++) {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1; i<=3; i++) {
        for(j=1; j<=i; j++) {
            cout<<" ";
        }
        cout<<"*";
        if(i != 3) {
            for(j=1; j<=2*(3-i-1)+1; j++) {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/