#include <iostream>
#include <string>
using namespace std;

bool check(int number){
    string input = to_string(number);
    int length = input.length();
    for(int index=0;index<length/2;index++){
        if(input[index] != input[length-1-index]){
            return false;
        }
    }
    return true;
}

int find(int number){
    int count = 0;
    int num = 0;
    while(true){
        if(check(num)){
            if(number == count){
                return num;
            }
            count++;
        }
        num++;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<find(n);
    return 0;
}