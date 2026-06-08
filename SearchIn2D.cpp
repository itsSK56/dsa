#include<iostream>
#include<vector>
using namespace std;
pair<int, int> search(vector<vector<int>> mat, int key) {
    int j = -1, i;
    for(i=0; i<mat.size(); i++) {
        if(mat[i][0] < key && key > mat[i][mat[i].size()]-1) {
            continue;
        }
        int st = i, end = mat[i].size() - 1;
        while(st <= end) {
            int mid = st + (end - st) / 2;
            if(mat[i][mid] == key){
                j = mid;
                break;
            }
            else if(mat[i][mid] < key) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        if(j != -1) {
            break;
        }
    }
    return {i, j};
}
int main() {
    vector<vector<int>> mat = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int key = 16;
    pair<int, int> pos = search(mat, key);
    cout<<pos.first<<" "<<pos.second;
    return 0;
}