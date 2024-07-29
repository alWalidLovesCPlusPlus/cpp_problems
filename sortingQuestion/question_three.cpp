//question: given vector find kth smallest element
#include <iostream>
#include <vector>
using namespace std;

void sorted(vector<int> &array){
    for(int index=0;index<array.size()-1;index++){
        for(int dex=0;index<array.size()-1-index;dex++){
            if(array[dex]>array[dex+1]) swap(array[dex],array[dex+1]) ;
        }
    }
}

int main(){
    int k;
    cin>>k;
    vector<int> array(k);
    for(int index=0;index<array.size();index++){
        int n;
        cin>>n;
        array[index] = n;
    }
    sorted(array);
    cout<<"value is: "<<array[k+1];
    return 0;
}