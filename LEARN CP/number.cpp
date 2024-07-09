#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a = 1000000;
    double b = 1000000;
    double c = a * b;
    cout<<"gives scientific noation: "<< c<<endl;
    cout<<"removes scientific noation: "<< fixed <<c<<endl;
    cout<<"removes scientific noation and cut all precison: "<< fixed <<setprecision(0)<<c<<endl;
    return 0;
}
