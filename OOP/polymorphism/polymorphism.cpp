/*
    1. compilte time polymorphism (constructor overloading, function overloading)
    think about inhertance in here => 2. run time polymorphism (function overriding, virtual function)
*/
#include <iostream>
using namespace std;

class person{
    string name;
    protected:void print(string name){
        cout<<name;
    };
    protected: virtual void hello(){
        cout<<"hello parent";
    };
};

class student : protected person {
    public:void print(string name){
        cout<<"name"<<" "<<name;
    };
    public: void hello(){
        cout<<"hello child";
    };
};

int main(){
    student j;
    j.print("walid");
    return 0;
}