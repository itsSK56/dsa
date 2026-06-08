#include<iostream>
#include<climits>
using namespace std;
int maxRowSum(int m[][3], int row, int col) {
    int maxSum = INT_MIN;
    for(int i=0; i<row; i++) {
        int sum = 0;
        for(int j=0; j<col; j++) {
            sum += m[i][j];
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}
int main() {
    const int row = 3, col = 3;
    int m[row][col] = {
        {1, 2, 3},
        {4, 5, 6},
        {0, 2, 1}
    };
    cout<<maxRowSum(m, row, col);
    return 0;
}