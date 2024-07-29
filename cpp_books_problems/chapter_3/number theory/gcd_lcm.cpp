#include <iostream>
using namespace std;

int GCD(int number1,int number2){
    if(number1%number2 == 0) return number2;
    return GCD(number1,number1%number2);
}

int main(){
    int a,b;
    cin>>a>>b;
    int gcd = GCD(a,b);
    cout<<"gcd: "<<gcd<<endl;
    cout<<"lcm: "<<(abs(a*b)/gcd)<<endl;
    return 0;
}