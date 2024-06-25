#include <iostream>
using namespace std;

int print(int n1,int n2){
    if(n2 == 1){
        return n1;
    }
    return n1 * print( n1, n2 - 1 );
}

int main(){
    cout<<print(3,3);
    return 0;
}