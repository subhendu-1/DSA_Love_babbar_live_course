#include<bits/stdc++.h>
using namespace std;

void util(int* p){
    // p = p+1;
    //but when you change in pointer
    *p = *p+1;
}


// In pointer pass by referrece

int solve(int*& ptr){
    ptr = ptr + 1;   //This is change the address of main function also
}

//Function to return as a return by a pointer 
// int* solv(){
//     int a = 5;
//     int* ans = &a;
//     cout << &a << endl;
//     cout << ans << endl;
//     cout << &ans << endl;
//     return ans;
// }
int& solv(){
    int a = 5;
    int* ans = &a;
    cout << &a << endl;
    cout << ans << endl;
    cout << &ans << endl;
    return a;
}

int main(){
    int a = 6;
    int* p = &a;
    int** q = &p;  //This is Two pointer approach

    cout << a << endl;
    cout << &a << endl;
    cout << p<< endl;
    cout << &p << endl;
    cout << *p << endl;
    cout << q << endl;
    cout << &q << endl;
    cout << *q << endl;
    cout << **q << endl;

    int b = 8;
    int* c = &b;
    //before
    cout << b << endl;
    cout << c << endl;
    cout << *c <<  endl;
    util(c);
    //After
    cout << b << endl;
    cout << c << endl;
    cout << *c <<  endl;



    // passe by reference

    int x = 5;
    int& y = x;
    cout << x << endl;
    cout << y << endl;

    cout << solv() << endl;
    return 0;
}