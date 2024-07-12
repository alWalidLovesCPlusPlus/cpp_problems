#include <iostream>
using namespace std;

int main(){
    int binary[] = {2,4,5,7,9,9,5,4,2,1,3,4,6};
    int length = sizeof(binary)/sizeof(binary[0]);
    for(int index=0;index<length-1;index++){
        for(int dex=0;dex<length-1-index;dex++){
            if(binary[dex]>binary[dex+1]){
                swap(binary[dex],binary[dex+1]);
            }
        }
    }
    //print
    for(int index=0;index<length;index++){
        cout<<binary[index]<<" ";
    }
    return 0;
}