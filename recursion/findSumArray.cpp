#include <iostream>
using namespace std;

int print(int array[],int index, int *sum){
    if(index==-1) return 1;
    *sum += array[index];
    print(array,index-1,sum);
    return 1;
}

int main(){
    int array[] = {1,2,3,4,5};
    int index = (sizeof(array)/sizeof(array[0]))-1;
    int k = 0;
    int *sum = &(k);
    int norm = print(array,index,sum);
    cout<<*sum;
    return 0;
}