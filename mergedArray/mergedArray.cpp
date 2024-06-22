//question : given two arrays 'array_one' and 'array_two' sorted in increasing order. Merge them in a single soted array
#include <iostream>
using namespace std;

int main(){

    //arrays
    int array_one[] = {1,2,3,4,5};
    int array_two[] = {6,7,8,9,10};

    //length 
    int array_one_length = (sizeof(array_one)/sizeof(array_one[0]));
    int array_two_length = (sizeof(array_two)/sizeof(array_two[0]));

    //sorted and merged array
    int array_result[array_one_length+array_two_length];

    //itrate variables
    int index = 0; //will help to itrate through array_one
    int dex = 0; //will help to itrate through array_two
    int x = 0; //will help to itrate through array_result

    //logic code
    while(index<array_one_length && dex<array_two_length){
        if(array_one[index]<=array_two[dex]){
            array_result[x] = array_one[index];
            x++;
            index++;
        }else{
            array_result[x] = array_two[dex];
            x++;
            dex++;
        }
    }
    //if one array is run out
    while(index<array_one_length){
        array_result[x] = array_one[index];
        x++;
        index++;
    }
    while(dex<array_two_length){
        array_result[x] = array_two[dex];
        x++;
        dex++;
    }

    //printing the merged and sorted array
    for(int index=0;index<(sizeof(array_result)/sizeof(array_result[0]));index++){
        cout<<array_result[index]<<" ";
    }
}