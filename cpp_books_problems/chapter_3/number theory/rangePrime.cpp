#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<bool> store(int number){
    //making a vector consisting only of 'true'
    vector<bool> result(number+1,true);
    result[0] = false;
    result[1] = false;
    for(int index=2;index*index<=number;index++){
        for(int dex=2*index;dex<=number;dex+=index){
            result[dex] = false;
        }
    }
    return result;
}

int main(){
    int r,l;
    cin>>r>>l;
    vector<bool> result = store(l);
    // print
    for(int index=0;index<=l;index++){
        if(result[index] == true && (r<=result[index] && result[index]<=l) ){
            cout<<index<<" ";
        }
    }
    return 0;
}
