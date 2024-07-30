#include <iostream>
using namespace std;

class Fruit{
    string name;
    string color;

    public:
    void set(string name = "undefined", string color = "undefined"){
        this->name = name;
        this->color = color;
    }

    public:
    void get(){
        cout<<"Name: "<<name<<endl;
        cout<<"Color: "<<color<<endl;
    }

};

int main(){
    Fruit *apple = new Fruit();
    apple->set();
    apple->get();
    return 0;
}