#include<iostream>
using namespace std;

int sum_even_number(int n){
    int sum = 0; 
    // for(int i = 1; i <= n; i++){
    //     if(i%2==0){      /// "%" opertion is very havy operation so try to avoid it
    //         sum = sum+i;
    //     }
    // }


    for(int j = 2; j <= n;j = j+2){
        sum = sum + j;
    }
    return sum;
}

int add(int a ,int b){
    int ans = a+b;
    return ans;
}
int main(){
	bool a = false;

    // int c = ~a;
    bool c = ~a;

	cout << a << endl;
	cout << ~a << endl; // This is print -1 because in memore check first  value is 1 so it memory reader is take "-" first
    cout << c << endl; // YOU wnat to print posit sign first store it in boolean variable


    int num = -13;
    int ans = num >> 1;
    cout << ans << endl;

    int z = 9;

    if(true){
        // int z = 2;
        cout << z << endl;
    }
    cout << z<< endl;



    int x = 35;
    cout << "address of x is : " << &x << endl;

     cout << add(x,z);

     int n;
     cin >> n;
     int sum = sum_even_number(n);
     cout << sum;

    return -1;

}