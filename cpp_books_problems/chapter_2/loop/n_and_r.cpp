#include <iostream>
using namespace std;

int factorial(int number){
    int result = 1;
    for(int index=1;index<=number;index++){
        result *= index;
    }
    return result;
}

int center(int n, int r){
    int n_f = factorial(n);
    int r_f = factorial(r);
    int minus_f = factorial(n-r);
    return (n_f/(r_f*(minus_f)));
}

int main(){
    int n,r;
    cin>>n>>r;
    int result = center(n,r);
    cout<<result<<endl;
    return 0;
}