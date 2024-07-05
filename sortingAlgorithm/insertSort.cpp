#include <iostream>
#include <vector>
using namespace std;

void insertSort(vector<int> &array){
    for(int index=1; index<array.size(); index++){
        int saved = array[index]; // small
        int second_index = index - 1;
        while(second_index >= 0 && array[second_index] > saved){
            array[second_index + 1] = array[second_index]; 
            second_index--;
        }
        array[second_index + 1] = saved;
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