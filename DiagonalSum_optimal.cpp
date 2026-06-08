#include<iostream>
using namespace std;
int diagonalSum(int m[][3], int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += m[i][i];
        if(i != n - 1 - i) {
            sum += m[i][n - 1 -i];
        }
    }
    return sum;
}
int main() {
    const int n = 3;
    int m[n][n] =  {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout<<diagonalSum(m, n);
    return 0;
}