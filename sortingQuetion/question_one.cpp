//question : given vector, move all 0 at last but the order of the number should not be changed
#include <iostream>
#include <vector>
using namespace std;

void make(vector<int> &array){
    for(int index=0;index<array.size()-1;index++){
        for(int dex=0;dex<array.size()-1-index;dex++){
            if(array[dex] == 0 && array[dex+1] != 0){
                swap(array[dex],array[dex+1]);
            }
        }
    }
}

int main(){
    int length;
    cin>>length;
    vector<int> array(length);
    for(int index=0;index<length;index++){
        cin>>array[index];
    }
    make(array);
    for(int index=0;index<length;index++){
        cout<<array[index]<<" ";
    }
    return 0;
}