#include <iostream>
using namespace std;

int print(int number){
    if(number == 0||number ==1){
        return 1;
    }
    return number*print(number-1);
}

int main(){
    cout<<print(5);
   return 0; 
}