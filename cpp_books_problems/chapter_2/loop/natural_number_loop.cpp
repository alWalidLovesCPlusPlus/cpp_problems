#include <iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    int sum = 0;
    for(int index=1;index<=number;index++){
        sum += index;
    }
    cout<<"sum: "<<sum<<endl;
    return 0;
}