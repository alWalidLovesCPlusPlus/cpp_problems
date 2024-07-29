#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &array){
    for(int index=0;index<array.size();index++){
        int small_index = index;
        for(int dex=index+1;dex<array.size();dex++){
            if(array[small_index]>array[dex]){
                small_index = dex;
            }
        }   
        if(small_index != index){
            swap(array[index],array[small_index]);
        }
    }
}

int main(){
    int length;
    cin>>length;
    vector<int> array(length);
    for(int index=0;index<array.size();index++){
        cin>>array[index];
    }
    selectionSort(array);
    for(int index=0;index<array.size();index++){
        cout<<array[index]<<" ";
    }
    return 0;
}