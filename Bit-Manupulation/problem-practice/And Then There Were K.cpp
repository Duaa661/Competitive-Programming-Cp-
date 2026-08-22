
#include <bits/stdc++.h>
using namespace std;
void solve(){
      long long  n;
    cin >> n;
    long long c=0;
    while(n>0){
        c++;
        n /= 2;
    }
    cout << (1<<(c-1))-1 << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}