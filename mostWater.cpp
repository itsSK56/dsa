// Container with most Water (Brute Force Approach)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int i, j, h, area=0;
    for(i=0; i<9; i++){
        for(j=i+1; j<9; j++) {
            h = min(height[i], height[j]);
            area = max(area, h*(j-i));
        }
    }
    cout<<"\n Container with Most Water: "<<area;
    return 0;
}