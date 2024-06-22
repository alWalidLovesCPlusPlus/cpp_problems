// question : given an array sorted in increasing order, find if there exists a pair in the array whose sum is exactly 'x'
#include <iostream>
using namespace std;

//logic code
bool findPairArray(int array[], int length,int x){
    for(int index=0;index<length;index++){
        for(int dex=index+1;dex<length;dex++){
            if(array[index]+array[dex]==x){
                return true;
            }
        }
    }
    return false;
}

int main(){
    //array, length and 'x'
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(array)/sizeof(array[0]);
    int x = 3;

    //logic code
    if(findPairArray(array,length,x)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;
}
