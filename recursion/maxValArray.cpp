#include <iostream>
using namespace std;

int print(int array[], int index,int defmax){
    
}

int main(){
    int array[] = {2,41,4,5,2,3};
    int index = sizeof(array)/sizeof(array[0])-1;
    int max = print(array,index,array[0]);
    cout<<max;
    return 0;
}