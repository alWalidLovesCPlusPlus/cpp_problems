#include <iostream>
#include <vector>
using namespace std;

int find(vector<int> &numbers){
    int max = 0;
    int crr_count = 0;
    for(int index=0;index<numbers.size();index++){
        if(numbers[index] == 1){
            crr_count++;
            if(crr_count>max){
                max = crr_count;
            }
        }else{
            crr_count = 0;
        }
    }
    return max;
}

int main(){
    int l;
    cin>>l;
    vector<int> numbers(l);
    for(int index=0;index<l;index++){
        int j;
        cin>>j;
        numbers[index] = j;
    }
    int result = find(numbers);
    cout<<result;
    return 0 ;
}