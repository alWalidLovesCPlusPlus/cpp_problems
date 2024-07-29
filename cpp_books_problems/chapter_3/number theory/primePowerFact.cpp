#include <iostream>
#include <vector>
using namespace std;

void isPrime(int number,vector<int> &primeFactors){
    bool flag = true;
    for(int index=2;index*index<=number;index++){
        if(number%index == 0){
            flag = false;
            break;
        }
    }
    if(flag){
        primeFactors.push_back(number);
    }
}

void print(int number){
    vector<int> primeFactors;
    for(int index=2;index<=number;index++){
        if(number%index == 0){
            isPrime(index,primeFactors);
        }
    }
    //print
    for(int index=0;index<primeFactors.size();index++){
        cout<<primeFactors[index]<<" ";
    }
}

int main(){
    int number;
    cin>>number;
    print(number);
    return 0;
}