//Linear Search in 2D array

#include<iostream>
using namespace std;
bool linearSearch(int m[][3], int row, int col, int key) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(key == m[i][j]) {
                return true;
            }           
        }
    }
    return false;
}
int main() {
    int row=3, col=3;
    int m[row][col]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int key = 8;
    if(linearSearch(m, row, col, key)) {
        cout<<"Yes, its there";
    }
    else {
        cout<<"No, its not there";
    }
    return 0;
}