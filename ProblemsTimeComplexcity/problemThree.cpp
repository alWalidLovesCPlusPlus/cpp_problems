#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int value=0;
    for (int i = 1; i <= N; i *=2 ){
        for (int j = 1; j <= i ; j++){
            value++;
        }
    }
    
    return 0;
}