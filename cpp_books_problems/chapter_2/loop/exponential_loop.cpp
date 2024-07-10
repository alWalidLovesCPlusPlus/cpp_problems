#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int number;
    cin>>number;
    int sum = 0;
    int last = 1;
    for(int index=1;index<=number;index++){
        int i =1;
        for(int dex=last;i<=index;i++){
            sum += last;
            last++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
