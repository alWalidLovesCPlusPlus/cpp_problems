#include <iostream>
using namespace std;
int print(int number, int start){
    if(number == start) return start;
    cout<<start;
    return print(number,start+1);
}
int main(){
    int number = 5;
    cout<<print(number,1);
    return 0;
}