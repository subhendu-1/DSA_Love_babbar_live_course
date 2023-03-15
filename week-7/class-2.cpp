#include<bits/stdc++.h>
#include<limits.h>
using namespace std;


// You can go one stairs and two staris at a time

int stairs(int n){
    if(n == 0 || n == 1)
        return 1;
    int ans = stairs(n-1) + stairs(n-2);
    return ans;
}


// travers array using recursion 
void traversArray(int arr[],int size, int i){
    if(size <= i){
        return;
    }

    cout << arr[i] << " ";
    traversArray(arr,size,i+1);
}
void traversArray(int arr[],int size){
    if(size == 0){
        return;
    }

    cout << arr[0] << " ";
    traversArray(arr+1,size-1);
}


void findMax(int arr[],int n,int i,int& max){
    // int max = INT_MIN;

    if(i>=n){
        return;
    }

    if(arr[i] > max){
        max = arr[i];
    }

    return findMax(arr,n,i+1,max);

    // return max;
}
void findMin(int arr[],int n,int i,int& mini){
    // int max = INT_MIN;

    if(i>=n){
        return;
    }

    // if(arr[i] < min){
    //     min = arr[i];
    // }

    mini = min(mini,arr[i]);
    return findMin(arr,n,i+1,mini);

    // return max;
}

bool checkKey(int arr[],int n,int i,int key){
    if(i >= n){
        return false;
    }

    if(arr[i] == key){
        return true;
    }

    bool ans = checkKey(arr,n,i+1,key);
    return ans;
}

int main(){
    // int n;
    // cout << "Enter the number " ;
    // cin >> n;
    // int number = stairs(n);
    // cout << number << endl ;c


    int arr[5] = {2,5,6,27,7};
    int n = 5;
    int i = 0;
    // traversArray(arr,n);

    int maxi = INT_MIN;

    findMax(arr,n,i,maxi);

    cout << "maximum number is " << maxi << endl;
    int mini = INT_MAX;

    findMin(arr,n,i,mini);

    cout << "minimum number is " << mini << endl;

    return 0;
}