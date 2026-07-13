#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> ans;
    for (int i = 0; i < 4;i++){
        ans.push_back(i);
    }
    ans[0] = 5;
    for(auto it:ans){
        cout << it << " ";
    }
}