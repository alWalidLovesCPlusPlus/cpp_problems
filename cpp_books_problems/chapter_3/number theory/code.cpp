#include <iostream>
#include <vector>
using namespace std;
vector<bool> print(int range){
    vector<bool> array(range,true);
    array[0] = false;
    array[1] = false;
    for(int index=2;index*index<=range;index++){
        for(int dex=2*index;dex<=range;dex+=index){
            array[dex] = false;
        }
    }
    return array;
}
int main(){
    int number;
    cin>>number;
    int RANGE = 5000;
    vector<bool> array = print(RANGE);
    vector<int> result;
    for(int index=0;index<array.size();index++){
        if(array[index]){
            result.push_back(index);
        }
    }
    while(result.size()<=number){
        RANGE *=2 ;
        array = print(RANGE);
        result.clear();
        for(int index=0;index<array.size();index++){
        if(array[index]){
            result.push_back(index);
            }
        }
    }
    cout<<result[number-1]<<endl;
    return 0;
}