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


// Stack implementaion 

class Stack{
    public:
        int *arr;
        int size;
        int top;
    
    Stack(int size){
        arr = new int[size];
        this->size = size;
        top = -1;
    }
    
    void push(int data){

        if(size-top > 1){
            //space avaliable
            //insert
            top++;
            arr[top] = data;
        }
        else{
            // stack have a not space
            cout << "Stack is Overflow" << endl;
        }

    }

    void pop(){
            if(top == -1){
                //stack is emepty
                cout << "Stack is Underflow" << endl;
            }
            else{
                //stack is not empty
                top--;
            }
    }

    int getTop(){
            if(top == -1){
                cout << "Stack is empty" << endl;
            }
            else{
                return arr[top];
            }
    }

    int getSize(){
        return top+1;
    }


    bool isEmpty(){
        if(top == -1){
            return false;
        }
        else{
            return true;
        }
    }


    
};



int main(){
    string str = "36255223";
   
    string ans = Reverse(str);
    cout << ans << endl;

}