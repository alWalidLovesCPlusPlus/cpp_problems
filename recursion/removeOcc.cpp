#include <iostream>
#include <string>
using namespace std;

string print(string &input, int index) {
    if(index == input.length()) return "";
    string curr = "";
    curr += input[index];
    return ((input[index])=='a' ? "" : curr) + print(input,index+1);
}

int main() {
    string input = "abcaxahahahhahahjbdvbja";
    string value = print(input, 0);
    cout << value << endl;
    return 0;
}