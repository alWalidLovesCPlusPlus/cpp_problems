#include <iostream>
using namespace std;

int print(int number){
    if(number == 0) return 1;
    return (number-1)*print(number-2) + (number-1)*print(number-1);
}

int main(){
    int number;
    cin>>number;
    cout<<print(number);
    return 0;
}