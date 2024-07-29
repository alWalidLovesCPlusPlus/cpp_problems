#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int printDigitSum(int number, int index){
    if(number%10 == 0 ) return 0;
    return number%10 + printDigitSum(number/index,index);
}

int numberPower(int number,int power){
    if(power == 0) return 1;
    return number*numberPower(number,power=power-1);
}

void printArrayElement(vector<int> &array,int length,int index){
    if(index > length) return;
    cout<<array[index]<<" ";
    printArrayElement(array,length,index=index+1);
}

void printArrayMaximumElement(vector<int> &array,int length,int index){
    int max = array[0];
    if(index>length) cout<<max;
    if(index>length) return;
    if(array[index]>max) max = array[index];
    printArrayMaximumElement(array,length,index=index+1);
}

int printArraySumElement(vector<int> &array,int length,int index){
    if(index>length) return 0;
    int sum = array[index];
    return sum + printArraySumElement(array,length,index = index+1);
}

void removeOcc(string input, int length, int index){
    if(index>length) return;
    if(input[index] != 'a') cout<<input[index];
    removeOcc(input,length,index=index+1);
}

void palindrome(string input,int length, string &result){
    if(length==-1) return;
    result += input[length];
    palindrome(input,length=length-1,result);
}

void printNaturalNumber(int limit, int number){
    if(number == limit+1) return;
    cout<<number<<" ";
    printNaturalNumber(limit,number=number+1);
}

void printNumberAndMultiples(int realNumber, int number,int index){
    if(index>number) return;
    cout<<realNumber<<" X "<<index<<" : "<<(realNumber*index)<<endl;
    printNumberAndMultiples(realNumber,number,index=index+1);
}

void naturalNumberReverseSum(int limit, int index, int &sum){
    if(index>limit) return;
    int number = index%2 != 0 ? index : -(index);
    sum += number;
    naturalNumberReverseSum(limit,index=index+1,sum);
}

int GCD(int number1,int number2){
    if(number1%number2 == 0) return number2;
    return GCD(number1,number1%number2);
    //code lcm in bellow by n1*n2/gcd
}

void armstrong(int number,int &sum, int index){
    if(index>number)return;
    sum += pow(index,3);
    armstrong(number,sum,index=index+1);
}

void checkExistance(vector<int> array,int number, int index){
    bool result = number == array[index] ? true : false;
    if(index>array.size()) return;
    if(index==array.size()-1) cout<<result;
    checkExistance(array,number,index=index+1);
}

int main(){
    // vector<int> array(5);
    // array[0] = 1;
    // array[1] = 2;
    // array[2] = 3;
    // array[3] = 4;
    // array[4] = 0;
    return 0;
}