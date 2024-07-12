#include <iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    bool result = true;
    for(int index=2;index<number;index++){
        if(number%index == 0){
            result = false;
            break;
        }
    }
    if(number == 1){
        result = false;
    }
    if(result){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}