#include<iostream>
using namespace std;

//Encapsulation:-in endcaosulation is to make sure that sensitive data hidden from user  If you want other to read or modify the value 
// of private mameber you can use get and set methods

class animal{
    private:
        string name;
        int age;
    public:
    
        void eating(){
            cout << "He wants to eating food" << endl;
        }

        int getAge(){
        return this->age;
        }

        void setAge(int age){
            this->age = age;
        }
};

// child or derived calss

class cat:protected animal{
    public:
        int speed;
        void print(){

            
        }
};

int main(){
    animal dodo;
    //endcapsulation
    // dodo.setAge(20);
    // cout << dodo.getAge(); // you can't access this because it is private member of a fun

    //Inheritance
    // dodo.eating();

    cat c1;
    // c1.eating();
    c1.speed = 10;
    cout << c1.speed;
    return 0;
}