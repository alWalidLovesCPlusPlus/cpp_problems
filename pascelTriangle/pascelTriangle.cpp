#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > logic(int number){
    vector<vector<int> > pascal(number);

    for(int i = 0; i < number; i++){
        pascal[i].resize(i + 1); // Resize each row to the appropriate size

        // Fill the row with appropriate values
        for(int j = 0; j <= i; ++j){
            if(j == 0 || j == i){
                pascal[i][j] = 1; // Edge values are 1
            } else {
                // Calculate other values using the previous row
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }

    return pascal;
}

int main(){
    int number;
    cout << "Enter the number of rows for Pascal's triangle: ";
    cin >> number;

    vector<vector<int> > pascal = logic(number);

    // Print Pascal's triangle
    for(int i = 0; i < pascal.size(); ++i){
        for(int j = 0; j < pascal[i].size(); ++j){
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
