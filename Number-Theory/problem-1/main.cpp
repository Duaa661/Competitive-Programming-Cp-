#include <iostream>
using namespace std;
void findfactorial(int n){
    for (int i = 1; i*i< n;i++){
        if(n%i==0){
            cout << i << " ";
            if(i!=(n/i)){
                cout << n / i << " ";
            }
        }
    }
}
bool findprime(int n){
    if(n<2){
        return false;
    }
    for (int i = 1; i*i< n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
 int n;
 cin>>n;
 findfactorial(n);
 findprime(n);
 return 0;
}