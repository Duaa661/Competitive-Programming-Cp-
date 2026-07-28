#include <iostream>
using namespace std;

long long findPow(long long a, long long b) {
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    long long x = findPow(a, b / 2);

    long long ans = x * x;

    if (b % 2 == 1)
        ans = ans * a;

    return ans;
}

int main() {
    long long n, m;
    cin >> n >> m;
      if(n>30){
          cout << m;
      }
      else{
       long long  x=findPow(2, n);
       long long ans = m%x;
       cout << ans;
      }

    return 0;
}