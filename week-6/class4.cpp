#include<bits/stdc++.h>
using namespace std;

void util(int* p){
    // p = p+1;
    //but when you change in pointer
    *p = *p+1;
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
    return 0;
}