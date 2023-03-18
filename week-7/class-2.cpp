#include<bits/stdc++.h>
#include<limits.h>
#include<vector>
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

// bool checkKey(int arr[],int n,int i,int key){
//     if(i >= n){
//         return false;
//     }

//     if(arr[i] == key){
//         return true;
//     }

//     bool ans = checkKey(arr,n,i+1,key);
//     return ans;
// }
// int checkKey(int arr[],int n,int i,int key){
//     if(i >= n){
//         return -1;
//     }

//     if(arr[i] == key){
//         return i;
//     }

//     int ans = checkKey(arr,n,i+1,key);
   
// }

// print all repetative char


// void checkKey(string arr,int n,int i,int key){
//     if(i >= n){
//         return;
//     }

//     if(arr[i] == key){
//         cout << i << " ";
//     }

//     checkKey(arr,n,i+1,key);
   
// }

// When store the index in array 
// vector<int> checkKey(string arr,int n,int i,int key){
//     vector<int>ans;
//     if(i >= n){
//         return ans;
//     }
//     if(arr[i] == key){
//         ans.push_back(i);
//     }

//     checkKey(arr,n,i+1,key);
//     return ans;
   
// }

// another process


// void checkKey(string arr,int n,int i,int key,vector<int>& ans){

//     if(i >= n){
//         return ;
//     }
//     if(arr[i] == key){
//         ans.push_back(i);
//     }

//     checkKey(arr,n,i+1,key,ans);
//     // return ans;
   
// }
// count repeted number
void checkKey(string arr,int n,int i,int key,int& count){
    // int count = 0;
    if(i >= n){
        return;
    }
    if(arr[i] == key){
        count++;
    }

    checkKey(arr,n,i+1,key,count);
    // return ans;
   
}

// printing all digit in any number

void print_digit(int num){
    if(num == 0){
        return;
    }

        int digit = num % 10;
        num /= 10;
    

    print_digit(num);
        cout << digit << " ";
}




vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> answer;
        int i, j;
        int count[101] = {0, 0, 0};
		int len = nums.size();
        for(i = 0; i < len; i++) {
            count[nums[i]]++;
        }
        for(i = 1; i < 101; i++) {
            count[i] += count[i - 1];
        }
        for(i = 0; i < len; i++) {
            if(nums[i] == 0)
                answer.push_back(0);
            else
                answer.push_back(count[nums[i] - 1]);
                
        }
        return answer;
    }
int main(){
    // int n;
    // cout << "Enter the number " ;
    // cin >> n;
    // int number = stairs(n);
    // cout << number << endl ;c


    // int arr[5] = {2,5,6,27,7};
    // int n = 5;
    // int i = 0;
    // // traversArray(arr,n);

    // int maxi = INT_MIN;

    // findMax(arr,n,i,maxi);

    // cout << "maximum number is " << maxi << endl;
    // int mini = INT_MAX;

    // findMin(arr,n,i,mini);

    // cout << "minimum number is " << mini << endl;

    // int key = 27;
    // cout << checkKey(arr,n,i,key);


    string arr = "subhendu";
    char key = 'u';
    int i = 0;
    int n = arr.length();
    // vector<int> ans;
    // checkKey(arr,n,i,key,ans);

    // for(int i = 0; i < ans.size(); i++){
    //     cout << ans[i] << " ";
    // }

    // int cnt = 0;
    // checkKey(arr,n,i,key,cnt);
    // cout << cnt << endl;

    int num = 357;
    // vector<int>ans;
    print_digit(num);
    
    // for(int i = 0; i < ans.size(); i++){
    //     cout << ans[i] << " ";
    // }


    

    return 0;
}