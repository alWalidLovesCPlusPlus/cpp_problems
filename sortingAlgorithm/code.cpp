#include <iostream>
#include <vector>
using namespace std;

void insertSort(vector<int> &array){
    for(int index=1;index<array.size();index++){
        int saved = array[index];
        int itrator = index-1;
        while(itrator>=0 && array[itrator]>saved){
            array[itrator+1] = array[itrator];
            itrator--;
        }
        array[itrator+1] = saved;
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