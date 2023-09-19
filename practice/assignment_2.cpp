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

int* reverserInt(int n,int arr[]){
    int ans = 1;
    int i = 0;
    vector<int>vec;
    // int arr[100];
    while (n != 0){
        int digit = n % 10;
        // vec.insert(digit);
        arr[i++] = digit;
        n = n / 10;
    }
   return arr;
    
}

int main(){
    
    int n ; 
    cin >> n;
    
    // cout << coutntfactorial(n);
    
    // for(int i = 2; i <= n; i++){
    //     bool isPrime = printPrime(i);
    //     if(isPrime){
    //         cout << i << " ";
    //     }

    // }

    int arr[100];

    int* ptr = reverserInt(n,arr);
    int size = sizeof(ptr);
    for(int i = 0; i < size; i++){
        cout << ptr[i];
    }

    return 0;
}