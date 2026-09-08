#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    long long ans = 0;
    for (int i = 0; i <= n;i++){
        long long second = n;
         long long first = i;
        bool isValid = true;
        for (int j = k-2; j >= 1;j--){
            long long third = second-first;
            if(third>first){
                isValid = false;
                break;
            }
            if(third<0){
                  isValid = false;
                break;
            }
            second = first;
            first = third;
        }
        if (isValid)
        {
            ans++;
        }
        
    }
    cout << ans << "\n";
}
int main(){
  int t;
  cin >> t;
  while (t--)
  {
      solve();
  }
  
}