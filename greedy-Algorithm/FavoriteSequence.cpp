

#include <bits/stdc++.h>
using namespace std;
void solve(){
     int n;
     cin >> n;
     vector<int>arr(n);
     for (int i = 0; i < n;i++){
         cin >> arr[i];
     }
     vector<int> ans;
     int left = 0;
     int right = n-1;
     for (int i = 0;i<n;i++){
        if(i%2!=0){
            cout << arr[right] << " ";
            right--;
        }
        else{
            cout << arr[left] << " ";
            left++;
        }
     }
     cout << "\n";
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}