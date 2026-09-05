

#include <bits/stdc++.h>
using namespace std;
void solve(){
     int n;
     cin >> n;
     string s;
     cin >> s;
     int ans = 0;
     int firstIndex = 0;
     int secondIndex = 0;
     for (int i = 0; i < n;i++){
        if(s[i]=='B'){
            firstIndex = i;
            break;
        }
     }
     for (int i = n-1; i >=0;i--){
        if(s[i]=='B'){
            secondIndex = i;
            break;
        }
     }
     ans = secondIndex - firstIndex + 1;
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