#include <iostream>
using namespace std;

int print(int number){
    if(number == 1) return 1;
    int result = number%2 == 0 ? -(number) + print(number-1) : (number) + print(number-1);
    return result;
}

int main(){
    int number = 3;
    cout<<print(number);
    return 0;
}