#include <iostream>
using namespace std;

void leftHalfPyramid(int rows){
    for(int index=1;index<=rows;index++){
        for(int star = 1;star<=index;star++){
            cout<<"* ";
        }
        for(int dot=1;dot<=rows-index;dot++){
            cout<<". ";
        }
        cout<<endl;
    }
}

void rightUpperHalfPyramid(int rows){
    for(int index=1;index<=rows;index++){
        for(int dot = 1;dot<index;dot++){
            cout<<". ";
        }
        for(int star = 0;star<=(rows-index);star++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void HalfPyramid(int rows){
    for(int index=1;index<=rows;index++){
        for(int dot=1;dot<=(rows-index);dot++){
            cout<<". ";
        }
        for(int star=1;star<=((2*index)-1);star++){
            cout<<"* ";
        }
        for(int dot=1;dot<=(rows-index);dot++){
            cout<<". ";
        }
        cout<<endl;
    }
}

void numberUpperReversedHalfPyramid(int rows) {
    for (int index = 1; index <= rows; index++) {
        for (int dot = 1; dot < index; dot++) {
            cout << ".";
        }
        for (int number = 1; number <= rows - index + 1; number++) {
            cout << number;
        }
        for (int nxt = rows - index; nxt >= 1; nxt--) {
            cout << nxt;
        }
        for (int dot = 1; dot < index; dot++) {
            cout << ".";
        }
        cout << endl;
    }
}

void starDiamond( int rows){
    //part one
    for(int row =1;row<=rows;row++){

        //space
        for(int space=1;space<=(rows-row);space++){
            cout<<" ";
        }
        //star
        for(int star=1;star<=((2*row)-1);star++){
            cout<<"*";
        }
        //space
        for(int space=1;space<=(rows-row);space++){
            cout<<" ";
        }
    cout<<endl;
    }
    //part two
    for(int row=1;row<=(((rows*2)-1) -(rows));row++){
        //space
        for (int space = 1; space <= row; space++){
            cout<<" ";
        }
        //star
        for (int star = 1; star <(((rows-row)*2)+1)-1; star++){
            cout<<"*";
        }
        //space
        for (int space = 1; space <= row; space++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int rows;
    cin>>rows;
    starDiamond(rows);
    return 0;
}