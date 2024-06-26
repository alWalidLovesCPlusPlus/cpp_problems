#include <iostream>
using namespace std;

int print(int number,int *temp){
    if(number < 10 ){
        int lastDigit = (*temp)%10;
        (*temp) /= 10;
        return (number == lastDigit);
    }else{
        bool result = ((print(number/10,temp)) && ((number%10) == (*temp%10)));
        (*temp)/=10;
        return result;
    }
}

int main(){
    int number = 121;
    int another_number = number;
    int *temp = &another_number;
    cout<<print(number,temp);
    return 0;
}