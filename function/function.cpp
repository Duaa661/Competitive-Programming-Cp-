#include <iostream>
using namespace std;

void printNumber(int a,int b){
    for (int i = a; i <= b;i++){
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    printNumber(10, 20);
    printNumber(30, 50);
}