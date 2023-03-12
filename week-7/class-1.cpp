#include<iostream>
#include<algorithm>

using namespace std;

int find_powerN(int n){
    //base case
    // if(n == 0){
    //     return 0;
    // }
    if(n != 0){
        return 2*find_powerN(n-1);
    }
    else{
        return 1;
    }

    // recertion realtion

    // int ans = 2 * find_powerN(n-1);
    // return ans;
}

int factorial(int n){
    // base case
    if(n == 0){
        return 1;
    }

    int fac = n * factorial(n-1);

    return fac;
}

void print_counting(int n){
    //base case

    if(n == 0){
        return;
    }
    // processing
    cout << n << " ";
    //recirciev realtion
    print_counting(n-1);
}



///This is called HEAD recertion
void printincresing_counting(int n){
    //base case

    if(n == 0){
        return;
    }
    //recirciev realtion
    print_counting(n-1);
    // processing
    cout << n << " ";
}

int fibonachi(int n){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }

    int fib = fibonachi(n-1) + fibonachi(n-2);
    return fib;
}

int main(){
    int n;
    cout << "Enter the number " ;
    cin >> n;

    int ans = find_powerN(n);
    cout << ans;
    // int ans = factorial(n);
    // cout << ans;
    // print_counting(n);
    // int ans = fibonachi(n);
    // cout << ans;
    
}