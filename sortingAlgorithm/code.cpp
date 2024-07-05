#include <iostream>
#include <vector>
using namespace std;



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