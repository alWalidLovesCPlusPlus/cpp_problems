#include <iostream>
#include <vector>
using namespace std;

int main(){
    string sentence;
    getline(cin,sentence);
    string word = "";
    vector<int> array;
    for(int index=0;index<sentence.length();index++){
        if(sentence[index] == '/'){
            array.push_back(stoi(word));
            word = "";
        }else{
            word += sentence[index];
        }
    }
    array.push_back(stoi(word));
    for(int index=0;index<array.size();index++){
        cout<<array[index]<<" ";
    }
    return 0;
}