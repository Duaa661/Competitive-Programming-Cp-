#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number"<<endl;
    cin >> number;
    switch (number)
    {
    case 1:
        cout << "hindi" << endl;
        break;
    case 2:
        cout << "English" << endl;
        break;
    case 3:
        cout << "Gujrati" << endl;
        break;
    case 4:
        cout << "Tamil" << endl;
        break;
    default:
        cout << "haryanvi" << endl;
    }
    return 0;
}