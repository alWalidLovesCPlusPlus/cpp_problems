#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int number;
    cin>>number;
    int sum = 0;
    for(int index=1;index<=number;index++){
        if(index%2 == 0){
            sum -= index;
        }else{
            sum += index;
        }
    }
    cout<<sum;
    return 0;
}
