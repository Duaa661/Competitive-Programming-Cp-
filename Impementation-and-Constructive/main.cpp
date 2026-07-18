#include <iostream>
using namespace std;
bool CheckStatement(string statement){
    if(statement=="X++" || statement=="++X"){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    int X = 0;
    for (int i = 0; i < n;i++){
        string statement;
        cin >> statement;
        if(CheckStatement(statement)){
            X++;
        }
        else{
            X--;
        }
    }
    cout<<X;
}