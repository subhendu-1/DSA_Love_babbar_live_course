#include<bits/stdc++.h>
using namespace std;


double area_circle(int r){
    float area = 3.14*r*r;
    return area;
}


void find_even_odd(int n){
    if(n%2 == 0){
        cout << "This is even number" << endl;
    }
    else{
        cout << "This is odd number" << endl;
    }
}


int find_fact(int n){
    int fact = 1;
    for(int i = n; i > 0; i--){
        fact = fact * i;
    }
    return fact;
}

bool find_prime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            return false;
            break;
        }
        
    }
    return false;
}


void prime_numberPrint(int n){
    for(int i = 2; i <= n; i++){
        // check for prime
        int count = 0;
        for(int j = 2; j < n; j++){
            if(n%j==0){
                count++;
                break;
            }
        }

        if(count==0){
            cout << i << " ";
        }
    }
}

int main(){
    // float r;
    // cout << "Entet redious value " ;
    // cin >> r;
    // float area = area_circle(r);
    // cout << "area of circle is " << area << endl;


    // find_even_odd(r);

    int n;
    cout << "Enter the number ";
    cin >> n;
    // int fact = find_fact(n);
    // cout << "factorial is " << fact << endl;


    // bool  ans = find_prime(n);
    // if(ans == true){
    //     cout << "This is prime number" << endl;
    // }
    // else{
    //     cout << "This number is not a prime number" << endl;
    // }

    // prime_numberPrint(n);

    for(int i = 2; i <= n; i++){
        // check for prime
        int count = 0;
        for(int j = 2; j<= i/2; j++){
            if(i%j==0){
                count++;
                break;
            }
        }

        if(count==0){
            cout << i << " ";
        }
    }
    return 0;
}