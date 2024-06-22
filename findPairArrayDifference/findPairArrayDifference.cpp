// quesiton : given a sorted array in increasing order. Find if there is any pair in the array whose absolute difference is 'x' (given)
#include <iostream>
#include <cmath>
using namespace std;

bool findPairArrayDifference(int array[],int length,int x){
    int left=0;
    int right=length-1;
    while(left<right){
    int calc  =abs((array[right])-(array[left]));
        if( calc == x){
            return true;
        }else if( calc > x){
            left++;
        }else{
            right--;
        }
    }
    return false;
}

int main(){
    //array, length and 'x'
    int array[] = {1,2,3,4,5};
    int length = sizeof(array)/sizeof(array[0]);
    int x = 3;

    //function 
    bool result =  findPairArrayDifference(array,length,x);
    if(result){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}