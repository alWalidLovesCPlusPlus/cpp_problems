#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    getline(cin,input);
    int i = 0;
    int length = 0;
    while(true){
        if(input[i]){
            length++;
        }else{
            break;
        }
        i++;
    }
    cout<<length;
    return 0;
}