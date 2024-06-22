// question : given a vector sorted in increasing order, find if there exists a pair in the array whose sum is exactly 
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    //array,length,count,x
    int array[] = {1,2,3,4,5,6,7,8,9};
    int length = sizeof(array)/sizeof(array[0]);
    int count=0;
    int x = 5;

    //logic code
    int left=0;
    int right = length-1;
    while(left<right){
        int sum = array[left]+array[right];
        if(sum==x){
            count++;
            left++;
            right--;
        }else if(sum>x){
            right--;
        }else{
            left++;
        }
    }
    cout<<count;
    return 0;
}