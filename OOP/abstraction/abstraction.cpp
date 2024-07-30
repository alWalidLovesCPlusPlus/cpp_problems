//to display essential information while hinding unessential details
#include <iostream>
#include <cmath>
using namespace std;

class Function{
    public:
    int power(int x = 1, int y = 0){
        return pow(x,y);
    }
};

int main(){
    Function *function = new Function();
    cout<<function->power(5,2)<<endl;
    return 0;
}