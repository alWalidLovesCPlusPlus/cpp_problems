#include <iostream>
using namespace std;

int print(int array[], int index,int *defmax){
    if(index == -1) return INT_MIN;
    *defmax = array[index]>*defmax ? array[index] : *defmax;
    print(array,index-1,defmax);
    return INT_MAX;
}

int main(){
    int array[] = {1,1,1,1,1};
    int index = sizeof(array)/sizeof(array[0])-1;
    int *defmax = &(array[0]);
    int norm = print(array,index,&(array[0]));
    cout<<*defmax;
    return 0;
}