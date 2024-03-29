#include <iostream>
using namespace std;

// Encapsulation:-in endcaosulation is to make sure that sensitive data hidden from user  If you want other to read or modify the value
//  of private mameber you can use get and set methods

class animal
{
private:
public:
    string name;
    int age;

    void eating()
    {
        cout << "He wants to eating food" << endl;
    }

    int getAge()
    {
        return this->age;
    }

    void setAge(int age)
    {
        this->age = age;
    }
};

// child or derived calss

class cat : protected animal
{
public:
    int speed;
    void print()
    {
        cout << this->age;
    }
};

// Types of inheretache:
// single inheritance
class car
{
public:
    string name;

    void speed()
    {
        cout << "Speed up" << endl;
    }

    void brack()
    {
        cout << "Brack Up please" << endl;
    }
};

// single :-
class bugate : public car
{
public:
    int price;
};

// multilevel:-
class mastangGt : public bugate
{
public:
    int speeds;
};

// multipule inheritance:-

class fortunar : public mastangGt, public bugate
{
};

// hierarchila inheritance:-

class TATA : public car
{
};
class Mahindra : public car
{
};

// polymorphosom:-

int main()
{
    animal dodo;
    // endcapsulation
    //  dodo.setAge(20);
    //  cout << dodo.getAge(); // you can't access this because it is private member of a fun

    // Inheritance
    //  dodo.eating();

    cat c1;
    // c1.eating();
    c1.speed = 10;
    cout << c1.speed << endl;
    // cout << c1.age; // this is not accessable because in this child class data are protected
    c1.print();

    mastangGt obj;
    cout << obj.name << " " << obj.price << " " << obj.speeds << endl;
    return 0;
}