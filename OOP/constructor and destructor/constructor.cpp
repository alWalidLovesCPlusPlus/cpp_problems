// constructor is devided in 3 tyeps :
    //default
    //parameter
    //copy
#include <iostream>
using namespace std;

//class
class Fruits{
    public:
    string name;
    string color;

    //default contructor
    Fruits(){
        this->name = "undefined";
        this->color = "undefined";
    }

    //parameter contructor
    Fruits(string name, string color ){
        this->name = name;
        this->color = color;
    }

    //copy contructor ( we use this when we want to initialize an object by another existing object )
    Fruits(Fruits &object){
        name = object.name;
        color = object.color;
    }

};

int main(){

    Fruits mango("mango","yellow");
    cout<<"Mango Details: "<<endl;
    cout<<"Name: "<<mango.name<<endl;
    cout<<"Color: "<<mango.color<<endl;

    cout<<endl;

    //deafault one
    Fruits *apple = new Fruits();
    cout<<"Apple Details: "<<endl;
    cout<<"Name: "<<apple->name<<endl;
    cout<<"Color: "<<apple->color<<endl;

    cout<<endl;
    
    //parameter one
    Fruits *avocado = new Fruits("avocado","yellow");
    cout<<"mango Details: "<<endl;
    cout<<"Name: "<<avocado->name<<endl;
    cout<<"Color: "<<avocado->color<<endl;

    cout<<endl;

    //copy one
    Fruits *random = new Fruits(mango);
    cout<<"Random Details: "<<endl;
    cout<<"Name: "<<random->name<<endl;
    cout<<"Color: "<<random->color<<endl;
    return 0;
}