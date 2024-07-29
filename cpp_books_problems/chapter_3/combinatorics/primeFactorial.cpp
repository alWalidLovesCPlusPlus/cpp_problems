#include <iostream>
#include <cmath>
using namespace std;

int primeFactorial(int number,int prime, int i){
    int result = number/prime;
    if(number<=prime) return result;
    i++;
    return result + primeFactorial(number,pow(prime,i),i);
}

int main(){
    int number,prime;
    cout<<"give me the factorial number: ";
    cin>>number;
    cout<<endl;
    cout<<"give me the prime number: ";
    cin>>prime;
    cout<<primeFactorial(number,prime,1);
    return 0;
}
// confusion
// number : 10, and prime : 3
//ans is 4
// because 3 6 9 
//         3^1 2*3 3^2 = 4times