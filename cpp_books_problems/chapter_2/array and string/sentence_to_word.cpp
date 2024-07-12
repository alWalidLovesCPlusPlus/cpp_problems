#include <iostream>
#include <string>
using namespace std;

int main(){
    string name = "walid sarker is a boy";
    string word = "";
    for(int index=0;index<name.length();index++){
        if(name[index] == ' '){
            cout<<word<<endl;
            word = "";
        }else{
            word += name[index];
        }
    }
    cout<<word<<endl;
    
    return 0;
}