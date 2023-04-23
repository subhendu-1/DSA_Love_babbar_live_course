#include<iostream>
#include<stack>
using namespace std;



string Reverse(string str){
    stack<char>s;

    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        s.push(ch);
    }

    string ans="";

    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();

    }
    return ans;

}

int main(){
    string str = "36255223";
   
    string ans = Reverse(str);
    cout << ans << endl;

}