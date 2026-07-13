#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    map<int,string> mp;
    mp[0] = "Rahul";
    mp[0] = "Rahul";
    mp[1] = "Mohan";
    for(auto it:mp){
        cout << it.first<<it.second<< " ";
    }
}