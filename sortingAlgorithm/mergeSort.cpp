#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int> &array,int start,int end){
    if(start>=right) return;
    
}

int main(){
    int length;
    cin>>length;
    vector<int> array(length);
    for(int index=0;index<array.size();index++){
        cin>>array[index];
    }
    mergeSort(array,0,array.size()-1);
    for(int index=0;index<array.size();index++){
        cout<<array[index]<<" ";
    }
    return 0;
}