#include<bits/stdc++.h>
// #include<stirng>
using namespace std;


int getlength(char arr[]){
    int length = 0;
    int i = 0;
    while (arr[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
    
}

// Reverse array

    void reverseString(char s[]) {
        int n = getlength(s);
        int start = 0;
        int end = n-1;
        while(start <= end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
  
    }

bool check_palindrom(char arr[]){
    int n = getlength(arr);
    int s = 0; 
    int l = n-1;

    while(s <= l){
        if(arr[s] != arr[l]){
            return 0;
        }
        s++;
        l--;
    }
    return 1;
}

void lowercaseToUpper(char arr[]){
    int n = strlen(arr);
    for(int i = 0; i < n; i++){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
        arr[i] = arr[i]-'a'+'A';

        }
        // arr[i] = arr[i] - 32;
    }
}
void uppercaseTolower(char arr[]){
    int n = strlen(arr);
    for(int i = 0; i < n; i++){
        arr[i] = arr[i]-'A'+'a';
    }
}

bool comapare(string a,string b){
    int a_length = a.length();
    // int b_length = b.length();
    if(a.length() != b.length()){
        return false;
    }

    for(int i = 0; i < a.length(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}
int main(){
    // char arr[100];
    // // cin >> arr;
    // // cin >> arr[2];
    // // cin >> arr[3];
    // // cout << arr[3];


    // // When you wnat to print space tab and enter you not use just cin function
    // cin.getline(arr,50);
    // cout << arr << endl;

    // //length of a character array
    // cout << getlength(arr) << endl;
    // // Function is :-
    // cout << strlen(arr) << endl;
    // // This is show the size of arr not show the how many element is there
    // cout << sizeof(arr) << endl;

    // // Reverse char array

    // reverseString(arr) ;
    // cout << "After reverse the array " << arr << endl ;


    // // Check palindrom or not

    // bool i = check_palindrom(arr);
    // if(i == 1){
    //     cout << "This is plalindrom" << endl;
    // }
    // else{
    //     cout << "not a plaidrome" << endl;
    // }

    //  lowercaseToUpper(arr);
    // cout << "lower case to upper case convert " << arr << endl;





    // String:-------------------->

    // string str;
    // cout << "Enter the sring " << endl;
    // // cin >> str;
    // // When you want to take in input with space,tab or any this spacial you use getline() function
    // getline(cin,str);
    // cout << "print the array " << str << endl;

    // cout << "length:- " << str.length() << endl;  
    // cout << "isEmpty:- " << str.empty() << endl;

    // str.push_back('A');
    // cout << str << endl;

    string first = "Subhendu is a Web Developer";
    string second = "Subhendua";

    cout << first.substr(0,4) << endl;

    if(first.compare(second) == 0){
        cout << "first and last are exactly same" << endl;
    }
    else{
        cout << "they are not same" << endl;
    }

    string target = "Subhendu";
    int index = first.find(target);
    cout << index << endl;
    cout << first.find(target) << endl;
    if(first.find(target) == string::npos){
        cout << "not found" << endl;
    }
    else{
        cout << first.find(target) << endl;
    }

    string word = "are";
    first.replace(9,2,word);
    cout << first << endl;

    first.erase(9,4);
    cout << first << endl;


    return 0;
}