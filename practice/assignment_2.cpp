#include<bits/stdc++.h>
using namespace std;

int coutntfactorial(int n){
    int i = n;
    int ans = 1;
  for(int i = 1 ; i <= n; i++ ){
        ans = ans * i;
    }
    return ans;
}


bool printPrime(int n){
   
    for(int i = 2; i < n; i++){
            if(n % i == 0){
                return false;
            }
        }
    return true;
}

int main(){
    
    int n ; 
    cin >> n;
    
    // cout << coutntfactorial(n);
    
    for(int i = 2; i <= n; i++){
        bool isPrime = printPrime(i);
        if(isPrime){
            cout << i << " ";
        }

    }

    return 0;
}