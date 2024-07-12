#include <iostream>
#include <vector>
using namespace std;

int main(){
    string sentence;
    getline(cin,sentence);
    string word = "";
    vector<string> add;
    for(int index=0;index<sentence.length();index++){
        if(sentence[index] == ' '){
            add.push_back(word);
            word = "";
        }else{
            word += sentence[index];
        }
    }
    add.push_back(word);
    cout<<add.size();
    return 0;
}