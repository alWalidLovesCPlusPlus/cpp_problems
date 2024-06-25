#include <iostream>
using namespace std;

int main(){
    int input;
    cin>>input;
    int value =0;
    for(int index=1;index<=input;index += index){
        value++;
    }
    //same logic
    // O(log n)
    return 0;
}