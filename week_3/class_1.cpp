#include<bits/stdc++.h>
using namespace std;


int print_array(int arr[],int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
int leniar_search(int arr[],int size,int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}


int find_0s_1s(int arr[],int size){
    int numzeros = 0;
    int numones = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            numzeros++;
        }
        if(arr[i] == 1){
            numones++;
        }
    }
    return numones;
}




int maximum_number(int arr[],int size){
    int max = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int reverse_array(int arr[],int size){
    int start = 0; 
    int end = size-1;
    int temp = 0;
    while(start <= end){
        // if(start == end){

        // }
             temp = arr[start];
             arr[start] = arr[end];
             arr[end] = arr[temp];
        // swap(arr[start],arr[end]);
        start++;
        end--;

    }
    return print_array(arr,size);
    // return 0;
}

int main(){

int arr[50];
int size,key;
cout << "Enter the size and key ";
cin >> size >> key ;
for(int i = 0; i < size; i++){
    cin >> arr[i];
}
// if(leniar_search(arr,size,key)){
//     cout << "Found the number";
// }
// else{
//     cout << "Not found";
// }

// This is called memset
// char str[] = "subhenduadak";
// memset(str,'t',sizeof(str));

// for(int i = 0; i < sizeof(str); i++){
//     cout << str[i] << " " ;  
// }

// int start = 0; 
// int end = size -1;

// while (start <= end){
//     if(start == end){
//         cout << arr[start] << " ";
//     }
//     else{
//        cout << arr[start] << " ";
//        cout << arr[end] << " ";
//     }

//     start++;
//     end--;
// }

// int str = reverse_array(arr,size);
// for(int i = 0; i < size; i++){
//     cout << str[i] << " ";
// }

reverse_array(arr,size);

    return 0;
}