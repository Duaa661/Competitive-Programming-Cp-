#include <iostream>
using namespace std;

void solve(){
    int x,y,n;
    cin >> x>> y>> n;
    int k = (n / x) * x;
    k += y;
    if(k>n){
        k -= x;
    }
    cout << k << endl;
}
int main(){
    int t;
    cin >>t;
    while(t--){
        solve();
    }
 }