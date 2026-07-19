#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >>k;
    long long arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    vector<pair<int, int>> v;
    for (int i = 0;i<n;i++){
        v.push_back({arr[i], i + 1});
    }
    sort(v.begin(), v.end());
    int ans = 0;
    vector<int>index;
    for(int i=0;i<n;i++){
        if(v[i].first<=k && k>0){
            ans++;
            index.push_back(v[i].second);
            k -= v[i].first;
        }
        else{
            break;
        }
    }
    cout<<ans<<'\n';
    for(int i=0;i<index.size();i++){
        cout << index[i] << " ";
    }
    cout<<"\n";
}