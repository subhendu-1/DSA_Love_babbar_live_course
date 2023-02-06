#include<bits/stdc++.h>
using namespace std;


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

    inverted_full_pyramid(n);
}