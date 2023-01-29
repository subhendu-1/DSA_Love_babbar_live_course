#include<bits/stdc++.h>
using namespace std;

int main(){
    int row ,col;
    cin >> row;
    cin >> col;
    // for(int i = 0; i < row; i++ ){
    //     for(int j = 0; j < col; j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }


    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}