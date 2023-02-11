#include<bits/stdc++.h>
using namespace std;


void full_pyramid(int n){
    for(int i = 0; i < n; i++){
        //for space printing
        for(int j = 0; j < n-i-1;j++){
            cout << " ";
        }

        //for star printing
        for(int z = 0; z < i+1; z++){
            cout << "* ";
        }
        cout << endl;
    }
}


void inverted_full_pyramid(int n){
    for(int i = 0; i < n; i++){
        //for space printing
        for(int j = 0; j < i;j++){
            cout << " ";
        }

        //for star printing
        for(int z = 0; z < n-i; z++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    int n; 
    cin >> n;

    full_pyramid(n);
    inverted_full_pyramid(n);
}