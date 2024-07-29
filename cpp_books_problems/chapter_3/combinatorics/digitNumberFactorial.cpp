#include <iostream>
#include <cmath>
using namespace std;

int digitNumberFactorial(int number) {
    double sum = 0;
    for (int i = 1; i <= number; ++i) {
        sum += log10(i);
    }
    return floor(sum) + 1;
}

int main() {
    int number;
    cout << "number: ";
    cin >> number;
    cout << digitNumberFactorial(number) << endl;
    return 0;
}
