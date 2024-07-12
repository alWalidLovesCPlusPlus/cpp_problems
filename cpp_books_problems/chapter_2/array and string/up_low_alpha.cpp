#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    getline(cin,input);
    int index=0;
    int length = input.length();
    int low=0,high=0;
    while(index<length){
        if('a'<=input[index] && input[index]<='z'){
            low++;
        } 
        if('A'<=input[index] && input[index]<='Z'){
            high++;
        }

        index++;
    }
    cout<<low<<" "<<high;
    return 0;
}