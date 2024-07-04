#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &array){
    for(int index=0;index<array.size()-1;index++){
        for(int dex=0;dex<array.size()-index-1;dex++){
            if(array[dex] > array[dex+1]){
                swap(array[dex],array[dex+1]);
            }
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
    bubbleSort(array);
    for(int index=0;index<array.size();index++){
        cout<<array[index]<<" ";
    }
    return 0;
}