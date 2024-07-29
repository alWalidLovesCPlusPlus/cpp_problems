//question : solve the string array;
#include <iostream>
#include <vector>
using namespace std;

void make(vector<string> &array){
    for(int index=0;index<array.size()-1;index++){
        for(int dex=0;dex<array.size()-1-index;dex++){
            if(array[dex][0]>array[dex+1][0]){
                swap(array[dex],array[dex+1]);
            }
        }
    }
}

int main(){
    int length;
    cin>>length;
    vector<string> array(length);
    for(int index=0;index<length;index++){
        string elem;
        cin>>elem;
        array[index] = elem;
    }
    make(array);
    for(int index=0;index<length;index++){
        cout<<array[index]<<" ";
    }
    return 0;
}