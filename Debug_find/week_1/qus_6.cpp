#include<bits/stdc++.h>
using namespace std;

int main(){
    // int row,col;
    // cin >> row  >> col;

    // for(int i = 0; i < row; i++){
    //     for(int j = 0; j < col;j++){
    //         // if(i == 0){
    //             // cout << j+1 << "a";
    //         // }
    //         cout << j+1 << " ";
    //     }
    //     cout << endl;

    // }




    // int n;
    // cin>>n;
    // for(int i=0;i<n;++i){
    //     for(int j=i+1;j<=n;j++){
    //         if(j==i+1 || j == n - i - 1 || i == 0){
    //             cout<<j << "a";
    //         }
    //         else{
    //             cout<<"b";
    //         }
    //     }
    //     cout<<endl;
    // }


    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int col = 0; col < n;col++) {
            if((i == 0) || (col == 0) || (col == n - i - 1) ){
                cout << "*" << " ";
            }
            else{
                cout << " " << " ";
            }

        }
        cout << endl;
    }
}