#include <iostream>
using namespace std;

int print(int number1, int number2){
    if(number1<number2) return print(number2,number1);
    if(number2 ==0) return number1;
    return print(number2,number1%number2);
}

int main(){
    cout<<print(20,10);
    return 0;
}
//a,b a>b
//b,a%b