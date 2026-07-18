// #include <iostream>
// using namespace std;

// int main(){
//   string x;
//   cin >> x;
//   for (int i = 0; i < x.size();i++){
//       char ch = x[i];
//       int digit = ch - '0';
//       int inverted = 9 - digit;
//       if (i == 0 && digit == 9)
//           continue;
//      if(digit>inverted){
//          x[i] = inverted +'0';
//      }
//   }
//   cout << x << endl;
// }


#include <iostream>
using namespace std;

int main(){
  string x;
  cin >> x;
  string ans = "";
  for (int i = 0; i < x.size();i++){
      char ch = x[i];
      int digit = ch - '0';
      int inverted = 9 - digit;
      ans += (min(digit, inverted)) + '0';
  }
  if(ans[0]=='0'){
      ans[0] = '9';
  }
  cout <<ans<<"\n";
}