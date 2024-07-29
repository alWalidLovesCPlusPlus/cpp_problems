#include <iostream>
using namespace std;

bool check(int number){
    bool flag = true;
    if(number == 1) return true;
    for(int index=2;index*index<=number;index++){
        if(number%index==0){
            flag = false;
            break;
        }
    }
    return flag;
}

int main(){
    int number;
    cin>>number;
    if(check(number)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}