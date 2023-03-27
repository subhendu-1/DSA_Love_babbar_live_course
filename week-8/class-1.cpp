#include<iostream>
using namespace std;

// marge two sorted array function

void marge(int* arr,int s,int e){
    int mid = (s+e)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // ceat new array copy the left is_array

    int* left = new int[len1];
    // ceat new array copy the left is_array

    int* right = new int[len2];

    // copy the left array 

    int k = s;

    for(int i = 0; i < len1; i++){
        left[i] = arr[k];
        k++;
    }
    // copy the right array 

    k = mid + 1;

    for(int i = 0; i < len2; i++){
        right[i] = arr[k];
        k++;
    }

    // merging two array untill one array was exhested
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else{
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    // Rmaining store in the main array

    while(leftIndex < len1){
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    while(rightIndex < len2){
        arr[mainArrayIndex++] = right[rightIndex++];
    }
}


void margeSort(int* arr,int s,int e){
    //in array one value is there singale element s == e
    //if s > e :- Invalid array
    if(s >= e){
        return;
    }

    int mid = (s+e)/2;

    // left part sorting
    margeSort(arr,s,mid);

    // right part sorting

    margeSort(arr,mid+1,e);

    marge(arr,s,e);
}

int main(){
    int arr[] = {1,5,2,7,3,9};
    int n = 6;
    int start = 0;
    int end = n - 1;
    margeSort(arr,start, end);

    // print the array after sorting

    // for(auto it:arr){
    //     cout << it << " ";
    // }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}