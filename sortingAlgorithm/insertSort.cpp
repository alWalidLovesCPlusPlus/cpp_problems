#include <iostream>
#include <vector>
using namespace std;

void insertSort(vector<int> &array){
    int stored;
    for(int index=1;index<array.size();index++){
        stored = array[index];
        int reserved_index = index;
        while(reserved_index>0 && array[index-1]>stored){
            array[reserved_index] = array[reserved_index-1];
            reserved_index--;
        }
        array[reserved_index] = stored;
    }
}

int main(){
    int length;
    cin>>length;
    vector<int> array(length);
    for(int index=0;index<array.size();index++){
        cin>>array[index];
    }
    insertSort(array);
    for(int index=0;index<array.size();index++){
        cout<<array[index]<<" ";
    }
    return 0;
}