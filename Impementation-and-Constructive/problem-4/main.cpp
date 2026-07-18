#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
  long long ans = arr[n - 1];
long long mx = arr[n - 1] - 1;

for (int i = n - 2; i >= 0; i--) {
    if (mx <= 0) break;

    long long take = min(mx, arr[i]);
    ans += take;
    mx = take - 1;
}

cout << ans << "\n";
}