#include <iostream>
#include <vector>
using namespace std;

void binarySearchOccIndex(vector<int> array, int low, int high, int number) {
    int first = -1;
    int second = -1;
    while (low <= high) {
        int middle = low + ((high - low) / 2);
        if (array[middle] == number) {
            // Search for the first occurrence
            first = middle;
            high = middle - 1;
        } else if (array[middle] > number) {
            high = middle - 1;
        } else {
            low = middle + 1;
        }
    }

    low = 0;
    high = (sizeof(array) / sizeof(array[0])) - 1;

    while (low <= high) {
        int middle = low + ((high - low) / 2);
        if (array[middle] == number) {
            // Search for the last occurrence
            second = middle;
            low = middle + 1;
        } else if (array[middle] > number) {
            high = middle - 1;
        } else {
            low = middle + 1;
        }
    }

    cout << first << endl;
    cout << second << endl;
}

int binarySearchFindMiniIndexElemRotatedArr(vector<int> array,int low,int high){
    
}

int main() {
    int number = 5;
    vector<int> array(5);
    array[0] = 3;
    array[1] = 4;
    array[2] = 5;
    array[3] = 1;
    array[4] = 2;
    int mini_number = binarySearchFindMiniIndexElemRotatedArr(array,0,array.size()-1);
    cout<<mini_number;
    return 0;
}
