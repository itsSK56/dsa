#include <iostream>
#include <map>
#include<unordered_map> 
#include<set>
using namespace std;
int main() {
    set<int> s;
    s.insert(2);
    s.insert(1);
    s.insert(1);
    for(int val: s){
        cout<<val<<" ";
    }
    return 0;
}