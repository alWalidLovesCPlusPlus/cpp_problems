#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &array, int number, int low, int high){
    while(low<=high){
        //middle 
        int middle = low+(high-low)/2;
        //final output
        if(array[middle] == number) return middle;
        //logics
        if(array[middle] > number ) high = middle-1;
        else low = middle+1;
    }
    return -1;
}

int ternarySearch(vector<int> &array, int number, int low, int high){
    if(low<=high){
        //middle
        int middle_one = low+(high-low)/3;
        int middle_two = high-(high-low)/3;
        //final output
        if(array[middle_one] == number) return middle_one;
        if(array[middle_two] == number) return middle_two;
        //logic
        if(array[middle_one]>number) return ternarySearch(array,number,low,middle_one-1);
        else if(array[middle_two]<number) return ternarySearch(array,number,middle_two+1,high);
        else return ternarySearch(array,number,middle_one+1,middle_two-1);
    }
    return -1;
}

int main(){
    vector<int> array(6);
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    array[5] = 5;
    int number = 5;
    cout<<ternarySearch(array,number,0,array.size()-1);
    return 0;
}