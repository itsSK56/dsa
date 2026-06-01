// Container with Most Water (optimal Approach) 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int area=0, h, i=0, j=height.size()-1;
    while(i < j) {
        h = min(height[i], height[j]);
        area = max(area, h*(j-i));
        height[i] > height[j] ? j-- : i++;
    }
    cout<<"\n Container with Most Water: "<<area;
    return(0);
}