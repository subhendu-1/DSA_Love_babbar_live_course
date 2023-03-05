#include<bits/stdc++.h>
using namespace std;

int main(){
    // int a = 5;
    // int* p = &a;
    // cout << a << endl;
    // cout << &a << endl; //This is  address of a
    // cout << p << endl;  //p pointer store the address of a 
    // cout << &p << endl;  //this is address of p
    // cout << *p << endl; //'*p' This called value at ----this is print value This is called dereferance

//This bad prctice This is called segmentaion falt

    // int* str;
    // cout << *str << endl;
    // cout << &str << endl;
    // cout << str;



    // int* str = 0;  //This is NULL pointer
    // cout << *str << endl;
    // cout << &str << endl;
    // cout << str;



    // COPY ONE POINTER TO POINTER
    int a = 9;
    int* ptr = &a;
    int** q = &ptr;

    cout << *ptr << endl;
    cout << *q << endl;  //Those are return same value
    cout << q << endl;
    cout << &q << endl;
    return 0;
}