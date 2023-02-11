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


long long int find_fact(long long int n){
    long long int fact = 1;
    for(long long int i = n; i > 0; i--){
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
    return true;
}


void prime_numberPrint(int n){
    for(int i = 2; i <= n; i++){
        // check for prime
        int count = 0;
        for(int j = 2; j < i/2; j++){
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

void reverse_Integer(int n){
    int rem = 0;
    while (n!=0){
        rem = n%10;
        cout << rem;
        n = n/10;
    }
   
    
}


int set_bit(int n){
    int i;
    cout << "Enter the ith number ";
    cin >> i;

    
}



int set_kth_bit(int n,int k){
    int value = 1 << k;
    int ans = (n|value);
    return ans;
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
    int k;
    cout << "Enter the kth number ";
    cin >> k;
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

    // for(int i = 2; i <= n; i++){
    //     // check for prime
    //     int count = 0;
    //     for(int j = 2; j<= sqrt(i); j++){
    //         if(i%j==0){
    //             count++;
    //             break;
    //         }
    //     }

    //     if(count==0){
    //         cout << i << " ";
    //     }
    // }


    // // using checking prime number function

    // for(int i = 2; i <= n; i++){
    //     int isiprime = find_prime(i);
    //     if(isiprime){
    //         cout << i << " ";
    //     }
    // }


// set kth bit

int ans = set_kth_bit(n,k);
cout << ans;

    // reverse_Integer(243);
    return 0;
}