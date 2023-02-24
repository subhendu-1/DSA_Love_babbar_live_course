#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

void PrintColumnSum(int arr[][3],int row,int col){
    for(int i = 0; i < col; i++){
        int sum = 0; 
        for(int j = 0; j < row; j++){
            sum = sum + arr[j][i];
        }
        cout << sum << endl;
    }
}

bool linear_search(int arr[][3],int row,int col,int element){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j]== element){
                return true;
            }
        }
    }
    return false;
}

int maxNumber(int arr[][3],int row,int col){
    int max = INT_MIN;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    return max;
}
void printArray(vector<vector<int> >&arr,int row,int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
           cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transposabulArr(int arr[][3],int row,int col,int arr1[][4]){

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            arr1[j][i] = arr[i][j];
        }
    }
    // return arr1[row][col];
    // printArray(arr1,row,col);
};

int main(){
//     int arr[4][3] = {
//         {2,5,6},
//         {1,3,7},
//         {4,7,3},
//         {2,7,8}
//     };
//    PrintColumnSum(arr,4,3);
//    cout << linear_search(arr,4,3,7) << endl;
//    cout << maxNumber(arr,4,3) << endl;
//    int arr1[3][4];
//    transposabulArr(arr,4,3,arr1);
// //    printArray();
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 4; j++){
//            cout << arr1[i][j] << " ";
//         }
//         cout << endl;
//     }


    // vector in 2D array

    vector<vector<int> >arr(3,vector<int>(5,0));
    printArray(arr,3,5);

    return 0;
}