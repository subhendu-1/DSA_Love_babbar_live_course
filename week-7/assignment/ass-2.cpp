#include<iostream>
using namespace std;

void Reverse_string(string& str,int s,int e){
    if(s >= e){
        return;
    }

    swap(str[s],str[e]);
    Reverse_string(str,s + 1,e - 1);
}

int main(){
    string str = "agwdhye";
    int start = 0;
    int end = str.size() - 1;
    Reverse_string(str,start,end);
    cout << "After reverse the string " << str;
    return 0;
}