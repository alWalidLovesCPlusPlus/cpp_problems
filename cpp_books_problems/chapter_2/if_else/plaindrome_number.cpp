#include <iostream>
#include <string>
using namespace std;

bool check(int number){
    string input = to_string(number);
    for(int index=0;index<(input.length())/2;index++){
        if(input[index] != input[input.length()-1-index]){
            return false;
        }
    }
    return true;
}

int get(int number){
    int count = 0;
    int num = 0;
    while(true){
        if(check(num)){
            if(count == number){
                return num;
            }
        count++;
        }   
        num++;
    }
}

int main(){
    int number;
    cout<<"number: =>";
    cin>>number;
    int result = get(number);
    cout<<result<<endl;
    return 0;
}