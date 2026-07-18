#include <iostream>
#include <vector>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> rounds;
    vector<int> v = {10, 100, 1000, 10000, 100000};
    for(auto it:v){
        int remaning = n % it;
        if(remaning!=0)
        rounds.push_back(remaning);
        n -= remaning;
    }
    cout << rounds.size()<<endl;
    for(auto &it:rounds){
        cout << it << " ";
    }
    cout <<endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}