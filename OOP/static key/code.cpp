#include <iostream>
using namespace std;

//static key is created once and stays life time of the code
void run(){
    static int x = 0;
    cout<<x<<endl;
    x++;
}

class number{
    public:
    int x;
    void value(){
        x++;
    }
};

int main(){
    number object_one,object_two;
    object_one.x = 10;
    object_two.x = 20;
    // object_one.value();
    // object_two.value();
    cout<<object_one.x<<endl;
    cout<<object_two.x<<endl;
    return 0;
}