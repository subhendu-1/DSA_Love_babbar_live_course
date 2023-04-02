 #include<iostream>
 using namespace std;

 class car{
    // access modifier:- in c++ public private and protected this is mainly use to assign
    // the accessiablity to the class data members

    // Data member /  state / proparties
    private:    // This is access inside the class not outside the class    By default in class all data member and func are private
       int age;
    public:     // This is access inside the class and also outside the class
        int price;
        string name;
    

    // Data function/ Behaviour
    void speed(){
        cout << "This care race is 300km/h" << endl;
    }

    void lights(){
        cout << "Four lights are there" << endl;
    }

    // gatter :- When you want to access private data member from class you use getter and setter

    int getAge(){
        return age;
    }

    // void setAge(int n){
    //     age = n;
    // }

    // this keyword use when setter fun paramiter and the passing current object name is same 
    void setAge(int age){
        this->age = age;
    }
 };

 int main(){

    // Object Creation
    //Static
    car mastangGt;

    mastangGt.price = 30000000;
    mastangGt.name = "MASTANG-GT";
    cout << "The price of mastang Gt is " << mastangGt.price << endl;
    cout << "The car name is " << mastangGt.name << endl;
    mastangGt.speed();
    mastangGt.lights();


    // ACCESSING PRIVATE DATA MEMBER USING GETTER AND SETTER 
     mastangGt.setAge(5);
     cout << "The age of car is " << mastangGt.getAge();


    //  DYNAMIC MEMORY ALLOCATION

    car* subhendu = new car;

    // accesing

    cout << (*subhendu).price;

    return 0;
 }