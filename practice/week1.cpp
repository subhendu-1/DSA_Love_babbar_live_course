#include<iostream>
using namespace std;

bool primeOrNot(int n){
    for(int i = 2; i < n-1; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

float parimeterTriangle(float a,float b,float c){
    return a+b+c;
}

bool TrinagleCheckValidity(float a,float b,float c){
    if((a+b) > c && (b+c) > a && (c+a) > b){
        return true;
    }
    return false;
}

float findSimpleIntarest(int amount,float intarest,float time){
    float numirator = (amount * intarest * time);
    float ans = numirator/100;
    return ans; 
}

void backCounting(int n){
    for(int i = n; i > 0; i--){
        cout << i << " ";
    }
}


int factorialOfnum(int n){
    int ans = 1;
    for(int i = n; i >= 1; i--){
        ans = ans * i;
    }
    return ans;
}

void printEvenNum(int n){
    for(int i = 1; i <= n; i++){
        if(i%2 == 0){
            cout << i << " ";
        }
    }
}


int findMaxNum(int a,int b,int c){
    if(a>b){
        if(a>c){
            return a;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
}
int main(){
    int a;
    cin >> a;
    if(primeOrNot(a)){
        cout << "this number is prime" << endl;
    }
    else{
        cout << "This number is not prime" << endl;
    }
    if(cin >> a){
        cout << "This write" << endl;
    }
    if(cout << a << endl){
        cout << "This write" << endl;
    }
    return 0;
}