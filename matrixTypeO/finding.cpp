#include <iostream>
#include <vector>
#include <climits> // for INT_MIN
using namespace std;

int find(vector<vector<int> > &array){
    int maxOnes = INT_MIN;
    int row = -1;
    
    for(int index = 0; index < array.size(); index++){
        int countOnes = 0;
        
        for(int dex = 0; dex < array[index].size(); dex++){
            if(array[index][dex] == 1){
                countOnes++;
            }
        }
        
        if(countOnes > maxOnes){
            maxOnes = countOnes;
            row = index;
        }
    }
    
    return row;
}

int main(){
    vector<vector<int> > array(3, vector<int>(4));

    // Input
    cout << "Enter elements for the 3x4 array:" << endl;
    for(int i = 0; i < array.size(); i++){
        for(int j = 0; j < array[i].size(); j++){
            int k;
            cin >> k;
            array[i][j] = k;
        }
    }
    
    // Result
    int result = find(array);
    cout << "Row with maximum number of ones: " << result << endl;

    return 0;
}
