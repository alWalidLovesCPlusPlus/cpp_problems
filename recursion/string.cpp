#include <iostream>
#include <string>
using namespace std;

void print(string input,int i){
    if(i==(input.length()))return;
    cout<<input[i];
    print(input,i+1);
}

int main(){
    string value = "food";
    print(value,0);
    return 0;
}