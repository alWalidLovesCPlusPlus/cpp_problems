#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> normal_numbers;
    int number;
    cin>>number;
    int i = 0;
    while(true){
        normal_numbers.insert(normal_numbers.begin()+i,number%2);
        number = number/2;
        i++;
        if(number == 0){
            break;
        }
    }
    vector<int> binary;
    int j = 0;
    for(int index=normal_numbers.size()-1;index>=0;index--){
        binary.push_back(normal_numbers[index]);
        cout<<binary[j];
        j++;
    }
    return 0;
}