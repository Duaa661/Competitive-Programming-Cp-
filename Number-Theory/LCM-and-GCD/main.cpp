#include <iostream>
using namespace std;

int findGCD(int a,int b){
    if(a==0){
        return b;
    }
    return findGCD(a%b, a );
}

// int findGCD(int a,int b){
//     if(b==0){
//         return a;
//     }
//     return findGCD(b, a%b );

// }

int findLCM(int a,int b){
    return (a * b) / findGCD(a, b);
}
int main(){
    int a, b;
    cin >> a >> b;
    cout<<findGCD(a, b);
    cout <<"LCM:" <<findLCM(a, b);
}