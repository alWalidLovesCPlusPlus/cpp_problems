#include <iostream>
#include <cmath>
using namespace std;

int print(int number){
    if(number<10){
        // 0<=number||number<=9 (mistake)
        return number;
    }
    return number%10 + print(number/10);
}

int main(){
    cout<<print(abs(-123));
    return 0;
}