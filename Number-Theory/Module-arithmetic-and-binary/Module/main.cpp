#include <iostream>
using namespace std;
int findPow(int a,int b,int mod){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int x= findPow(a, b / 2,mod)%mod;
    int ans = 0;
    if (b % 2 == 1)
    {
        
        ans = (x%mod * x%mod)%mod;
        ans = (ans * a) % mod;
    }
     else{
         ans = (x % mod * x % mod) % mod;
     }
     return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int mod = 100;
    cout << findPow(a, b,mod);
    return 0;
}