#include<bits/stdc++.h>
using namespace std;


int find_setbit(int n){
    int count = 0;
    while (n!=0){
        if(n&1){
            count++;
        }
        n = n >> 1;
    }
    return count;

    
}

int main(){
    // int n;
    // cout << "Enter the number ";
    // cin >> n;
    // int rem = 0;
    // while (n!=0)
    // {
    //     rem = n%10;
    //     cout << rem << " ";
    //     n = n/10;
    // }


//     int rem = 0; int ans = 0;
//    int i = 0;
//     while ( n != 0)
//     {
        
//         rem = n%10;
//         int num = num * pow(10,i);
//         cout << num;
//         ans = num + ans;
//         n = n/10;
//         i++;
//     }

// //     cout << ans;
//     vector<vector<int>>points ;
//     for(int i = 0; i < points.size(); i++){
//         for(int j = 0; j < points.size(); j++){
//             cin >> points[i][j];
//         }
//     }

//     int c = points[0][0]*points[1][1] - points[1][0]*points[1][0];
//     int x = points[0][0] - points[1][0];
//     int y = points[0][1] - points[1][1];


//     if(points[2][1]*x == points[2][0]*y+c){
//         cout << "flase" << endl;
//     }
//     else{
//         cout << "true" << endl;
//     }

cout << find_setbit(3);
return 0;
    
}