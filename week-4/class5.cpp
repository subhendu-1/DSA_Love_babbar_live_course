#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&vac){
    for(int i = 0; i < vac.size()-1; i++){
        int minIndex = i;
        for(int j = i+1; j < vac.size(); j++){
            if( vac[j] < vac[minIndex] ){
                minIndex = j;
                
            }
        }
        swap(vac[minIndex],vac[i]);
    }
}

void bubbleSort(vector<int>&vec){
    for(int i = 0; i < vec.size()-1; i++){
        bool swapped = false;
        for(int j = 0; j < vec.size()-i-1; j++){
            if(vec[j] > vec[j+1]){
                swapped = true;
                swap(vec[j],vec[j+1]);
            }
        }
        if(swapped == false){
            break;
        }
    }
}

void insertionSort(vector<int>&vec){
    int flag=0;
}
int main(){
    vector<int>vec{2,6,3,8,9,15};
    // selectionSort(vec);
    bubbleSort(vec);
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    return 0;
}