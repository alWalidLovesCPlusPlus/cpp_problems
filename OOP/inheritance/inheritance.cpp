#include <iostream>
using namespace std;

class Person{
    protected:
    string name;
    string address;
    string instituion;
    Person(string name, string address, string instituion){
        this->name = name;
        this->address = address;
        this->instituion = instituion;
    }
};

class Citizen{
    public:string Cname;
    private:int id;
    Citizen(string name,int id){
        name = name;
        id = id;
    }
};

class Student : public Person, private Citizen{
    private: int roll;
    public: Student(string name, string address, string instituion, int roll) : Person(name,address,instituion){
        roll = roll;
    };
    void information(){
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Instituion: "<<instituion<<endl;
    }
};

int main() {
    Student *Al_Walid_Sarker = new Student("Al Walid Sarker","Bangladesh","Amena-Baki",3364);
    Al_Walid_Sarker->information();
    return 0;
}