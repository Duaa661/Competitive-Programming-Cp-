#include <iostream>
#include <vector>
using namespace std;

int sieve(int n){
    vector<bool> prime(n + 1, true);
    prime[0] =false;
    prime[1] = false;
    for (int i = 2; i*i<= n;i++){
        if (prime[i])
        {
            for (int j = i * i; j <= n;j+=i){
                prime[j] = false;
            }
        }
    }
    return prime;
}
int main()
{
 int n;
 cin>>n;
 if(sieve(n-2)){
     cout << "2" << n - 2 << "\n";
 }
 else{
     cout << "-1\n";
 }
     return 0;
}