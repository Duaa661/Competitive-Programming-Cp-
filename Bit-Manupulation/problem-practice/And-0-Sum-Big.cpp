#include <iostream>
using namespace std;

const long long MOD = 1000000007;

void solve() {
    long long n, k;
    cin >> n >> k;

    long long ans = 1;

    while (k > 0) {
        if (k & 1) {
            ans = (ans * n) % MOD;
        }

        n = (n * n) % MOD;
        k = k >> 1;
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}