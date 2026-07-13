#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int grade;
    cin >> grade;
    if(grade>=90){
        cout << "Excellent";
    }
    else if(grade>=70){
        cout << "Very good";
    }
    else{
        cout << "Back";
    }
    return 0;
}