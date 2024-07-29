#include <iostream>
#include <cmath>
using namespace std;

int factorialLast0(int number, int normal5,int &i){
    if(number<=normal5) return number/normal5;
    int result = number/normal5;
    i++;
    return result + factorialLast0(number,(pow(normal5,i)),i);
}

int main(){
    int number;
    cin>>number;
    int i = 1;
    cout<<factorialLast0(number,5,i);
    return 0;
}