#include <iostream>
using namespace std;

int main(){
    int input;
    cin>>input;
    int value =0;
    for(int index=1;index<=input;index *=2){
        value++;
    }
    /*
    index    =>    1   2   4   8   16  + ... + 2^k
    iterations =>  2^0 2^1 2^2 2^3 2^4 + ... + (k+1)th
    2^k <= n
    klog(base)2 2 <= log(base)2 n
    k <= log(base)2 n ------> 1
    as, (k+1) == iterations
    so, from 1. => iterations = log(base)2 n + 1

    time complexcity = O(log n)
    */
    return 0;
}