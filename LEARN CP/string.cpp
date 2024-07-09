#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int testCase;
    cin>>testCase;
    cin.ignore();//so that it can ignore the ' ' or "slash n" ( because getline will not ignore /n and we know cin does ignore)
    while(testCase--){
    string input;
    getline(cin,input);
    cout<<input<<endl;
    }
    return 0;
}
