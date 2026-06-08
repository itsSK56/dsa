// Linear Search in 2D return pair ....pair<row, col>

#include<iostream>
using namespace std;
pair<int, int> linearSearch(int m[][3], int row, int col, int key) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(key == m[i][j]) {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}
int main() {
    const int row = 3, col = 3;
    int m[row][col] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };
    int key = 8;
    pair<int, int> r = linearSearch(m, row, col, key);
    if(r.first != -1) {
        cout<<"Found at: "<<r.first<<" "<<r.second;
    }
    else {
        cout<<"Not Found!";
    }
    return 0;
}