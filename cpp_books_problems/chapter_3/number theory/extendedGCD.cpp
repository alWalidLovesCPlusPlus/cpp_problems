#include <iostream>
using namespace std;

int exGCD(int number1, int number2, int &x, int &y){
    if(number1==0){
        x = 0;
        y = 1;
        return number2;
    }
    int x1 = 0,y1 = 0;
    int modulas = (number2%number1,number1,x1,y1);
    x = y1 - (number2/number1) * x1;
    y = x1;
    return modulas;
}

int main(){
    int x = 0;
    int y = 0;
    cout<<exGCD(10,6,x,y);
    return 0;
}