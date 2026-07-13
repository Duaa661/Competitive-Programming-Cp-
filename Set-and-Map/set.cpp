#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(95);
    s.insert(4);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    for(auto it:s){
        cout << it<< " ";
    }
}