#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

void lastOccurenceLtR(string &str,char c,int &ans,int i){
    if(i >= str.size() - 1 ){
        return;
    }

    if(str[i] == c){
        ans = i;
    }
    lastOccurenceLtR(str,c,ans,i+1);
}
void lastOccurenceRtL(string &str,char c,int &ans,int i){
    if(i < 0 ){
        return;
    }

    if(str[i] == c){
        ans = i;
        return;
    }
    lastOccurenceRtL(str,c,ans,i-1);
}

int main(){
    // string str = "abcddwgdae";
    // char c = 'd';
    // char* ch = strrchr(str,'d');   // This is work on only character string 
    // cout << "The index of last occur" << ch - str + 1 << endl; 
    char str[] = "This is a string";
    char* ch = strrchr(str, 'i');
    cout << "Index of last occurence of i: " << ch - str + 1;




    // int i = 0;
    // int ans = -1;

    // // lastOccurenceLtR(str,c,ans,i);
    // // cout << "The last occurence of input character is " << ans << endl;
    // int i = str.size() - 1;
    // lastOccurenceRtL(str,c,ans,i);
    // cout << "The last occurence of input character is " << ans << endl;
    // return 0;
}