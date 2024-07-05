#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &array, int start, int end){
    int pivot = array[end];
    int index = start-1;
    for (int dex = 0; dex < end; dex++)
    {
        /* code */
    }
    
}

void quickSort(vector<int> &array, int start, int end){
    if(start<end){
        int pivot = partition(array,start,end);
        quickSort(array,start,pivot-1);
        quickSort(array,pivot+1,end);
    }
}

int main(){
    int length;
    cin>>length;
    vector<int> array(length);
    for(int index=0;index<array.size();index++){
        cin>>array[index];
    }
    quickSort(array,0,length-1);
    for(int index=0;index<array.size();index++){
        cout<<array[index]<<" ";
    }
    return 0;
}