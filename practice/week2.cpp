#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int number(int arr[],int n){
    int ans = 0;
    // for(int i = 0; i < n; i++){
    //     ans = ans * 10 + arr[i]; 
    // }
    // return ans;

    // next apprach
    int result = 0;
    for(int i = n-1,j = 0; i > 0, j < n; i--,j++){
        result += arr[i] * pow(10,j);
    }
    return result;
}



int decTobin(int n){
  
    // int rev = 0;
    // int i = 0;
    // while(n > 0){
    //     int bit = n % 2;
    //     rev = bit*pow(10,i++)+rev;
    //     // cout << bit << ans;
    //     n = n / 2;
    //     // i++;
    // }
    // return rev;

    int i = 0;
    int ans = 0;
    while(n != 0){
        int bit = n & 1;
        ans = bit * pow(10,i++) + ans;
        n = n >> 1;
    }

    return ans;


    
}


int binaryToDeci(int n){
    int i = 0;
    int decimal = 0;
    while(n){
        int bit = n & 1;
        decimal = decimal + bit * pow(2,i);
        n = n >> 1;
    }
    return decimal;
}
int main(){
    // int a = 0;
    // a = abs(~a);
    // cout << a << endl;
    // return 0;

//     int arr[] = {1,2,6,2};
//     int ans = number(arr,4);
//     cout << ans << endl;
    // int n;
    // cin >> n;
    // // cout << decTobin(n) << endl;
    // int ans = binaryToDeci(n);
    // cout << ans << endl;

    
}
