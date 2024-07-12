#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int binary[] = {1,1,0,0,1,0};
    int length = sizeof(binary)/sizeof(binary[0]);
    int parser  = length-1;
    int sum = 0;
    for(int index=0;index<length;index++){
        sum += binary[index] * pow(2,parser--);
    }
    cout<<sum<<endl;
    return 0;
}