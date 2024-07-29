#include <iostream>
using namespace std;

int bigMOD(int number, int power, int modNumber){
    if(power == 0) return 1;
    int x = bigMOD(number,power/2,modNumber);
    x = (x*x)%modNumber;
    if(power%2==1) x = (x*number)%modNumber;
    return x;
}

int bigModQuestion(){
    
}

int main(){
    cout<<bigMOD(11,1,2);
    return 0;
}