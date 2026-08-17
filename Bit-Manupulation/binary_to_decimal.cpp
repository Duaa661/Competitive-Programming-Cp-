#include <bits/stdc++.h>
using namespace std;


int main() {
   int n=23;
   string binary = "";
   while (n > 0)
   {
       int rem = n % 2;
       binary +=rem;
       n /= 2;
   }
   reverse(binary.begin(), binary.end()); 
   cout << binary;
   return 0;
}