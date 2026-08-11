#include <bits/stdc++.h>
using namespace std;

bool check(int n,int h,vector<int>&a,int k){
    int sum = 0;
    for (int i = 0; i < n;i++){
        int x = a[i] + k - 1;
        if(a[i+1]<=k){
            x = a[i + 1] - a[i];
        }
        sum += x;
    }
    return (sum >= h);
}
void solve(){
    int n, h;
    cin >> n >> h;
    vector<int> arr(n);
    for (int i = 0; i < n;i++){
        cin>>arr[i];
    }
    int ans = 0;
    int low = 1;
    int high = h;
    while(low<=high){
        int mid = low + (high - low) / 2;
        if(check(n,h,arr,mid)){
            ans = mid;
              high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
int main() {
    int t;
       cin>>t;
       while(t--){
        solve();
       }
   return 0;
}