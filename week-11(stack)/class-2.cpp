#include<iostream>
#include<stack>

using namespace std;
// top most element insert at bottom of the stack using same stack

 void solve(stack<int>&s,int target){
    if(s.empty()){
        s.push(target);
        return;
    }

    int topelement = s.top();
    s.pop();

    //Recurtion call
    solve(s,target);

    // BT

    s.push(topelement);
}


void insertAtBottom(stack<int>&s){
    if(s.empty()){
        cout << "Stack is empty" << endl;
        return;
    }

    int target = s.top();
    s.pop();
    solve(s,target);
}

void reverseStack(stack<int>&s){
    // base case
    if(s.empty()){
        return;
    }

    int target = s.top();
    s.pop();

    // recrsion

    reverseStack(s);

    solve(s,target);
}

// chechk peranthesis is valid or not QUESTION NO IN LEETCODE :- 20

bool checkValid(string s){
    stack<char>st;
    for(int i = 0; i < s.length(); i++){
        //opening brackets
        char ch = s[i];

        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }

        else{
        // closing brackets
            if(!st.empty()){
                char chTop = st.top();
                if((ch == ')' && chTop == '(') || (ch == '}' && chTop == '{') || (ch == ']' && chTop == '[')){
                    st.pop();
                }

                else{
                    return false;
                }
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

int main(){
    // stack<int>s;
    // for(int i = 0; i < 5; i++){
    //     int n;
    //     cin >> n;
    //     s.push(n);
    // }

    // insertAtBottom(s);


    // reverseStack(s);

    // cout << "print stack" << endl;

    // while(!s.empty()){
    //     cout << s.top() << " ";
    //     s.pop();
    // }

    string str = "({)";
    if(checkValid(str)){
        cout << "valid" << endl;
    }
    else{
        cout << "Not valid" << endl;
    }

    cout << endl;

}