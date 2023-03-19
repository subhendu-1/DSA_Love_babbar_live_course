#include<iostream>
#include<vector>

using namespace std;

// Array sorted or not 

bool Check_sort(vector<int>& arr,int i,int& n){
    if(i == n-1){
        return true;
    }

    if(arr[i+1] < arr[i]){
        return false;
    }

    Check_sort(arr,i+1,n);
}


// int binary_search(vector<int>& array,int start,int end,int key){
//     if(start > end){
//         return -1;
//     }
//     int mid = start + (end-start)/2;
//     if(array[mid] == key){
//         return mid;
//     }
//     else if(array[mid] < key){
//         start = mid + 1;

//     }
//     else{
//         end = mid - 1;
//     }


//     binary_search(array,start,end,key);


// }

// using tarnari operator

int binary_search(vector<int>& array,int start,int end,int key){
    if(start > end){
        return -1;
    }
    int mid = start + (end-start)/2;
    if(array[mid] == key){
        return mid;
    }

    return array[mid] < key ? binary_search(array,mid + 1,end,key) :  binary_search(array,start,mid-1,key);
}

int binarySearch(vector<int>& arr,int first,int last, int key){
    if(first){
        
    }
}

int main(){

    // vector<int>arr  = {10,20,20,30,40};
    // int n = arr.size();
    // int i = 0;
    // if(Check_sort(arr,i,n)){
    //     cout << "This is sorted array" << endl;
    // }
    // else{
    //     cout << "This is unsorted array" << endl;
    // }


    vector<int>arr = {1,5,7,8,14,23};
    int s = 0;
    int end = arr.size() - 1;
    int key = 14;
    int ans = binary_search(arr,s,end,key);
    cout << "Index is " << ans << endl;

    return 0;
}