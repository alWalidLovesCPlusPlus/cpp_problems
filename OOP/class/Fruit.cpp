// user defined data-type is class
#include <iostream>
using namespace std;

//class
class Fruits{
    public:
    string name;
    string color;
};

int main(){
    Fruits apple; // object
    apple.name = "apple";
    apple.color = "red";
    cout<<apple.name<<endl;
    cout<<apple.color<<endl;

    cout<<endl;

    //also we can do this 
    Fruits *mango = new Fruits();
    mango->name = "mango";
    mango->color = "yellow";
    cout<<mango->name<<endl;
    cout<<mango->color<<endl;
    return 0;
}