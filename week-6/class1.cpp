#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 5;
    int* p = &a;
    cout << a << endl;
    cout << &a << endl; //This is  address of a
    cout << p << endl;  //p pointer store the address of a 
    cout << &p << endl;  //this is address of p
    cout << *p << endl; //'*p' This called value at ----this is print value
    return 0;
}