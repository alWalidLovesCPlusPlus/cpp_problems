#include <iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    int result = 1;
    for(int index=1;index<=number;index++){
        result *= index;
    }
    cout<<result<<endl;
    return 0;
}