// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int count = 0;

//     while (n > 0) {
//         int remainder = n % 2;

//         if (remainder == 1) {
//             count++;
//         }

//         n = n / 2;
//     }

//     cout << count << endl;

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// long long countbits(long long n){
//     long long count = 0;
//     while(n){
//         n = n & (n - 1);
//         count++;
//     }
//     return count;
// }
// int main() {
//    long long  x;
//    cin >> x;
//    cout << countbits(x);
//    return 0;
// }