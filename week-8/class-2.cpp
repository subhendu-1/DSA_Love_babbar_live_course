#include<iostream>
using namespace std;
void quickSort(int arr[],int s,int e){

}

int main(){
    int arr[] = {2,5,3,8,9,23};
    int n = 6;
    int s = 0;
    int e = n -1;
    quickSort(arr,s,e);

    for(auto it:arr){
        cout << it << " ";
    }
    
    return 0;
}