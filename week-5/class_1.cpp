#include<bits/stdc++.h>
using namespace std;

int main(){
    char arr[100];
    cin >> arr;
    // cin >> arr[2];
    // cin >> arr[3];
    // cout << arr[3];


    // When you wnat to print space tab and enter you not use just cin function
    cin.getline(arr,50);
    cout << arr << endl;
    return 0;
}