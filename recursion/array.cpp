#include <iostream>
using namespace std;

void print(int array[],int i){
    if(i==-1) return;
    cout<<array[i--];
    print(array,i);
}

int main(){
    int nums[5] ={1,2,3,4,5};
    print(nums,(sizeof(nums)/sizeof(nums[0])-1));
    return 0;
}