#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

int solve(vector<int> &arr, int target){
    if(target == 0){
        return 0;
    }
    if(target < 0){
        return INT_MAX;
    }
    int mini = INT_MAX;
    for(int i = 0; i < arr.size(); i++){
        int ans = solve(arr,target - arr[i]);
        if(ans != INT_MAX){
            mini = min(mini,ans + 1);
        }
    }
    return mini;
}

// int solve2(vector<int>& arr,int target,int output){
//     if(output == target){
//         return 0;
//     }

//     int mini = INT_MAX;



// }

int cut_into_segment(int x,int y,int z,int target){
    
}

int main(){
    vector<int>arr{1,2,3};
    int target = 5;
    int ans = solve(arr,target);
    cout << "minimum number is " << ans << endl;
}