#include <iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    if(number%400 == 0 || (number%100 != 0 && number%4 == 0)){
            cout<<"Yes.";
    }else{
        cout<<"No.";
    }
    return 0;
}
