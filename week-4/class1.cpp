#include<bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int>&nums,int target){
    int start = 0; 
    int end = nums.size()-1;
    int mid = start + (end-start)/2;

    while(start < end){
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int binarySearchFirstOcc(vector<int>&nums,int target){
    int start = 0; 
    int end = nums.size()-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){
        if(nums[mid] == target){
            ans = mid;
            start = mid + 1;
        }
        else if(nums[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int binarySearchLastOcc(vector<int>&nums,int target){
    int start = 0; 
    int end = nums.size()-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){
        if(nums[mid] == target){
            ans = mid;
            // This is for First index
            // end = mid - 1;

            start = mid + 1;
        }
        else if(nums[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    vector<int>nums{1,4,5,7,8};
    // int n = 5;
    // cout << "Enters the nums values" << endl;
    // for(int i = 0; i < n; i++){
    //     cin >> nums[i];
    // }
    
    // int Index = BinarySearch(nums,5);
    // cout << Index;


    vector<int>arr{1,2,3,4,4,4,4,4,5};
    int FirstIndex = binarySearchFirstOcc(arr,4);
    cout << FirstIndex << endl;



    return 0;
}