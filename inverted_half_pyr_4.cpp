#include<bits/stdc++.h>
using namespace std;

int main(){
    int row,col;
    cin >> row >> col;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col - i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}