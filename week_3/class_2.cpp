#include<bits/stdc++.h>
using namespace std;



int find_uniqu(vector<int>&arr){
    int ans = 0; 
    for(int i = 0; i < arr.size(); i++){
        ans = ans ^ arr[i];
    }
    return ans;
}


// vector<int> Sum_of_Two_vec(vector<int>&arr,vector<int>&arr1){
//     vector<int>newArray;
//     for(int i = 0; i < arr.size(); i++){
//         newArray.push_back(arr[i]);
//     }
//     return newArray;
// }
int main(){
    // int n;
    // cout << "Enter vector size ";
    // cin >> n;
    // vector<int>arr(n,10);
    // for(int i = 0; i < arr.size(); i++){
    //     cout << arr[i] << " ";
    // }
    // // cout << "Enter the value " << endl;
    // // for(int i = 0; i < arr.size(); i++){
    // //     arr.push_back(i);
    // // }
    // // for(int i = 0; i < arr.size(); i++){
    // //     cout << arr[i] << " ";
    // // }


    // arr.push_back(23);
    // arr.push_back(23);
    // arr.push_back(23);
    // arr.push_back(23);
    // arr.push_back(23);
    // arr.push_back(23);
    // arr.push_back(23);
    // arr.push_back(23);
    // arr.push_back(23);
    // arr.push_back(23);
    // arr.push_back(23);
    // arr.push_back(23);

    // for(int i = 0; i < arr.size(); i++){
    //     cout << arr[i] << " ";
    // }

    // int ans = sizeof(arr)/sizeof(int);
    // cout << ans << endl;
    // int array_size = arr.size();
    // int array_capcity = arr.capacity();
    // cout << "array size is " << array_size  << endl;
    // cout << "array capcity is " << array_capcity << endl;




//     vector<int>arr{1,4,2,1,5,2,4};
//     vector<int>arr1{1,4,2,1,5,2,4,};

//     // int ans = find_uniqu(arr);
//     // cout << "Unique element is " <<  ans << endl;
// // UNION


//     vector<int>ans;

// //    nagelected duplicat number 


//     for(int i = 0; i < arr.size(); i++){
//         int element = arr[i];
//         for(int j = 0; j < arr1.size(); j++){
//             if(element == arr1[j]){
//                 arr1[j] = INT_MIN;
               
//             }
//         } 
//           ans.push_back(element);
//     }
//     // for(int i = 0; i < arr.size(); i++){
//     //     ans.push_back(arr[i]);
//     // }


//     for(int j = 0; j < arr1.size(); j++){
//         int value = arr1[j];
//         if(value != INT_MIN){
//         ans.push_back(arr1[j]);
//         }
//     }

//    for(int i = 0; i < ans.size(); i++){
//     cout << ans[i] << " ";
//    }



// INSERTION
    // vector<int>brr{2,3,5,7,4};
    // vector<int>brr1{9,3,3,5,2,6};


//     vector<int>ans;

//     for(int i = 0; i < brr.size(); i++){
//         int element = brr[i];
//         for(int j = 0; j < brr1.size(); j++){
//             if(element == brr1[j]){
//                 brr1[j] = -1;
//                 ans.push_back(element);
//             }
//         }
//     }

// //    vector<int>arrr = Sum_of_Two_vec(arr,arr1);
//    for(int i = 0; i < ans.size(); i++){
//     cout << ans[i] << " ";
//    }





// DELETE UNIQUE ELEMENT FROM VECTOR

    // vector<int>brr{2,3,5,5,7,4};
    // vector<int>brr1{9,3,3,5,2,6};
    // sort(brr1.begin(),brr1.end());
    // brr1.erase(unique(brr1.begin(),brr1.end()));
    // for(int i = 0; i < brr1.size();i++){
    //     cout << brr1[i] << " ";
    // }

    // // ANOTHER PROCESS USING UNORDER SET

    // unordered_set<int>setObj(brr.begin(),brr.end());

    // brr.assign(setObj.begin(),setObj.end());
    // sort(brr.begin(),brr.end());

    // for(auto it:brr){
    //     cout << it << " ";
    // }



// PAIR SUM 

// vector<int>crr{1,4,7,2,7,1,3};
// // vector<int>crr{1,4,2,2,12,1,7};
// int value = 5;
// for(int i = 0; i < crr.size(); i++){
//     for(int j = i+1; j < crr.size(); j++){
//         if(crr[i] + crr[j] == value){
//             cout << "{" << crr[i] << " " << crr[j] << "}" << endl;
//         }
//     }
// }


// TIPLET PAIR 


// vector<int>crr{1,4,7,2,7,1,3};
// // vector<int>crr{1,4,2,2,12,1,7};
// int value = 5;
// for(int i = 0; i < crr.size(); i++){
//     for(int j = i+1; j < crr.size(); j++){
//         for(int k = j+1; k < crr.size(); k++){
//             if(crr[i] + crr[j] +crr[k] == value){
//                 cout << "{" << crr[i] << " " << crr[j] << " " <<  crr[k] <<  "}" << endl;
//             }
//         }

//     }
// }


// Sort 0's and 1's 

// vector<int>arr{0,1,1,0,1,0,1,0,0};
// int start = 0; 
// int mid = 0;
// int end = arr.size() -1;

// while (start < end)
// {
//     if(arr[start] == 1 && arr[end] ==0){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     else if(arr[start] == 0 && arr[end] ==1){
//         // swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     else if(start == 0 && arr[end] == 0){
//         start++;
//     }
//     else{
//         end--;
//     }
// }


// for(int i = 0; i < arr.size(); i++){
//     cout << arr[i] << " ";
// }

// ANOTHER PROCESS

// while (mid != end)
// {
//     if(arr[mid] == 0){
//         //for swap from left side
//         swap(arr[start],arr[mid]);
//         start++;
//         mid++;
//     }
//     else{
//         //for swap from right side
//         swap(arr[mid],arr[end]);
//         end--;
//     }
// }

// for(auto ele:arr){
//     cout << ele << " ";
// }




// for(int i = 0; i < arr.size(); i++){
//     cout << arr[i] << " ";
// }



// Leetcode-189 problem Rotate array

// class Solution {
// public:
//     void reverse(vector<int>& num,int low,int high){
//         while(low < high){
//             swap(num[low],num[high]);
//             low++;
//             high--;
//         }
        
//     }
//     void rotate(vector<int>& nums, int k) {
//         // vector<int>temp(nums.size());
        
//         // for(int i = 0; i < nums.size(); i++){
//         //     temp[(i+k)%nums.size()] = nums[i];
//         // }
//         // // copy the vector temp to nums
//         // nums = temp;
        

//         // This code time complexity is O(n) and space complexity O(0)
//         int n = (int)nums.size();
//         k = k%n;
//         reverse(nums,0,n-k-1);
//         reverse(nums,n-k,n-1);
//         reverse(nums,0,n-1);
        
//     }
// };


// leetcode - 169 problem majority Element

vector<int>nums{2,3,2};
int n = (int)nums.size();
int limit = n/2;
int count = 0;

for(int i = 0; i < n; i++){
    int element = nums[i];
    for(int j = i+1; j < n; j++){
        if(element == nums[j]){
            count++;
            if(count > limit){
                cout << element;
                break;
            }
        }
    }
}


    return 0;
}