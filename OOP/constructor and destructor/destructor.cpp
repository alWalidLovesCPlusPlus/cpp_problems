// to delete we use this
//cannt pass parameter
//name ~(class_name)
//it works only on pointer variable
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
    
    //destructor
    ~Fruits(){
        cout<<"Destructor is called";
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
    delete apple;
    cout<<endl;

    cout<<endl;
    
    //parameter one
    Fruits *avocado = new Fruits("avocado","yellow");
    cout<<"mango Details: "<<endl;
    cout<<"Name: "<<avocado->name<<endl;
    cout<<"Color: "<<avocado->color<<endl;

    cout<<endl;

    //copy one
    Fruits *random = new Fruits(mango);
    // Fruits *random = new Fruits(*avocado); (can be used!)
    cout<<"Random Details: "<<endl;
    cout<<"Name: "<<random->name<<endl;
    cout<<"Color: "<<random->color<<endl;

    //after the full code the destructor will run manually

    return 0;
}