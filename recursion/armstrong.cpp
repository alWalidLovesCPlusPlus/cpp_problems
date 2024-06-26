#include <iostream>
#include <cmath>
using namespace std;
int print(int number){
    if(number%10 == 0) return number%10;
    return pow(number%10,3) + print(number/10);
}
int main(){
    int number =153;
    if(print(number) == number){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}