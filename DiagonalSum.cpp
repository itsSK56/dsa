// brute force

#include<iostream>
using namespace std;
int diagonalSum(int m[][3], int n) {
    int sum=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==j) {
                sum += m[i][j];
            }
            else if(j == n - 1 - i) {
                sum += m[i][j];
            }
        }
    }
    return sum;
}
int main() {
    const int n = 3;
    int m[n][n] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };
    cout<<diagonalSum(m, n);
    return 0;
}