#include<iostream>
#include<vector>
using namespace std;
int main() {
    int num;
    cout<<"\n Enter Number: ";
    cin>>num;
    vector<int> divisor;
    int cnt=2;
    while(num > 1) {
        if( num % cnt == 0) {
            divisor.push_back(cnt);
            num /= cnt;
        }
        else {
            cnt++;
        }
    }
    int freq  = 1;
    int ans = 1;
    int n = divisor.size();
    for(int i=0; i<n; i++) {
        cout<<" "<<divisor[i];
        if(i + 1 < n && divisor[i] == divisor[i+1]) {
            freq++;
        }
        else {
            for(int j=0; j<freq/3; j++) {
                ans *= divisor[i];
            }
            freq = 1;
        }
    }
    cout<<endl<<" Cube Root: "<<ans;
    return 0;
}