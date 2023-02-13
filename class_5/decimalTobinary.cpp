#include<bits/stdc++.h>
using namespace std;


int decimalToBinary(int n){
    int rem = 0;
    while (n>0)
    {
        rem = n%2;
        cout << rem;
        n = n/2;
    }
    return 0;
    
}
int main(){
    int n;
    cin >>n;
    int ans = decimalToBinary(n);
}