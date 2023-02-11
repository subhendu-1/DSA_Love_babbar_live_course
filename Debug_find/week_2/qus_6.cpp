#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int b){
    int ans=0;
    int c=0;
    while(b!=0){
        int digit = b%10;
        if(digit == 1){
            ans = ans + pow(2,c);
        }
        b/=2;
        c++;
    }
    return ans;
}


int main(){
    int n;
    cout << "Enter the binary number " ;
    cin >>n;

    cout << binaryToDecimal(n);
    return 0;
}