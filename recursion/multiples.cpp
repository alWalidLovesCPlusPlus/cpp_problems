#include <iostream>
using namespace std;

int print(int number,int k,int start){
    if(start == k) return number*k;
    cout<<number*start<<" ";
    return print(number,k,start+1);
}

int main(){
    int number =10;
    int k = 10;
    cout<<print(number,k,1);
    return 0;
}