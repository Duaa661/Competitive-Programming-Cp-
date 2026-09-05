

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0;
    int ans = 0;
    while(i<n){
        if(i<=n -5&&s.substr(i,5)=="mapie"){
            ans++;
            i += 5;
        }
        else if (i <= n -3&&( s.substr(i,3)=="map" || s.substr(i,3)=="pie")){
            ans++;
            i += 3;
        }
        else{
            i++;
        }
    }
    cout << ans << "\n";
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}