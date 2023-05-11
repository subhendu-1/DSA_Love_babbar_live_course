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


void insertAtBottom(stack<int>&s,int target){
    if(s.empty()){
        cout << "Stack is empty" << endl;
        return;
    }

    // int tartget = s.top();
    // s.pop();
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

    insertAtBottom(s,target);
}

int main(){
    stack<int>s;
    for(int i = 0; i < 5; i++){
        int n;
        cin >> n;
        s.push(n);
    }

    // insertAtBottom(s);


    reverseStack(s);

    cout << "print stack" << endl;

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

}