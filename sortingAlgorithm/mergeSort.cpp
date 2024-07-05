#include <iostream>
#include <vector>
using namespace std;

void add(vector<int> &array,int start,int end){
    int mid = (start+end)/2;
    //array1
    int length_one = mid - start + 1;
    int first[length_one];
    //array2
    int length_two = end - mid;
    int second[length_two];
    //copy values;
    int counter = start;
    for(int index=0;index<length_one;index++){
        first[index] = array[counter++];
    }
    for(int index=0;index<length_two;index++){
        second[index] = array[counter++];
    }
    //merge
    counter = start;
    int mergeIndex1=0;
    int mergeIndex2=0;
    while(mergeIndex1<length_one && mergeIndex2<length_two){
        if(first[mergeIndex1]>second[mergeIndex2]){
            array[counter++] = second[mergeIndex2++];
        }else{
            array[counter++] = first[mergeIndex1++];
        }
    }
    while(mergeIndex1<length_one){
            array[counter++] = first[mergeIndex1++];
    }
    while(mergeIndex2<length_two){
            array[counter++] = second[mergeIndex2++];
    }
}

void makeMergeSort(vector<int> &array,int start,int end){
    if(start>=end) return;
    int mid = (start+end)/2;
    makeMergeSort(array,start,mid);
    makeMergeSort(array,mid+1,end);
    add(array,start,end);
}

int main(){
    int length;
    cin>>length;
    vector<int> array(length);
    for(int index=0;index<array.size();index++){
        cin>>array[index];
    }
    makeMergeSort(array,0,array.size()-1);
    for(int index=0;index<array.size();index++){
        cout<<array[index]<<" ";
    }
    return 0;
}