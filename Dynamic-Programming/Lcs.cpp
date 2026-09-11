#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int rec(int i,int j,string &text1,string &text2,vector<vector<int>> &dp){
 if(i>=text1.size() || j>=text2.size()){
     return 0;
 }
 int ans = 0;
 if(dp[i][j]!=-1){
     return dp[i][j];
 }
 if(text1[i]==text2[j]){
    ans= 1+rec(i + 1, j + 1, text1, text2,dp);
 }
 else {
     ans = max(rec(i + 1, j, text1, text2,dp), rec(i, j + 1, text1, text2,dp));
 }
 return dp[i][j]=ans;
}
void solve(){
    string text1 = "abcde";
    string text2 = "ace";
    vector<vector<int>> dp(text1.size(), vector<int>(text2.size(), -1));
    cout<<rec(0, 0, text1, text2,dp)<<" ";
}
int main(){
    solve();
}