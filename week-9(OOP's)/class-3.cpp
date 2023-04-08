#include<iostream>
#include<stack>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int n = s.size();
        for(int i = 0; i < n; i++ ){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;
                char c = s[i];
                 st.pop(s[i]);
                if((s[i] == ')' && c = '(') || (s[i] == '}' && c = '{') || (s[i] == ']' && c = '[')){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }
};

int main(){
    string s;
    cin >> s;
    
}