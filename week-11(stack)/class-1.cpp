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

// fill a array using two stack

class stack2{
    public:
        int *arr;
        int size;
        int top1;
        int top2;

    stack2(int size){
        arr = new int[size];
        this -> size = size;
        top1 = -1;
        top2 = size;
    }


    void push1(int data){
        if((top2-top1) == 1){
            //spce is not avalible
            cout << "Stack is Overflow" << endl;
        }
        else{
            top1++;
            arr[top1] = data;
        }
    }

    void pop1(){
        if(top1 == -1){
            cout << "Stack is Underflow" << endl;
        }
        else{
            arr[top1] = 0;
            top1--;
        }
    }
    void push2(int data){
        if((top2-top1) == 1){
            //spce is not avalible
            cout << "Stack is Overflow" << endl;
        }
        else{
            top2--;
            arr[top2] = data;
        }
    }

    void pop2(){
        if(top2 == size){
            cout << "Stack is Underflow" << endl;
        }
        else{
            arr[top2] = 0;
            top2++;
        }
    }


   void print(){
    cout << endl;
    cout << top1 << endl;
    cout << top2 << endl;

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }cout << endl;
   }


};



int main(){
    // string str = "36255223";
   
    // string ans = Reverse(str);
    // cout << ans << endl;


    stack2 s(10);

    s.push1(10);
    s.print();
    s.push1(20);
    s.print();
    s.push1(30);
    s.print();
    s.push1(40);
    s.print();
    s.push1(50);
    s.print();
    s.push1(50);
    s.print();
    s.push1(50);
    s.print();


    s.push2(100);
    s.print();
    s.push2(90);
    s.print();
    s.push2(80);
    s.print();
    s.push2(70);
    s.print();

    s.pop2();
    s.print();
    s.pop2();
    s.print();
}