#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
using namespace std;

#include "Box.h"

void dispGame(Box);

int main() {
    Box sodoku;
    
    dispGame(sodoku);
    //    do{
    //      
    //    }while(!win);
    return 0;
}

void dispGame(Box sodoku) {
    //Display Column Numbers
    cout<<"   1 2 3 4 5 6 7 8 9"<<endl;

    //Loop to display the boards rows and columns
    for(int i=0;i<81;i++){
        //Divisor every 3rd row
        if((i / 9)!=0 && (i/9)%3 == 0 && (i%9)==0){
            cout<<"   -----+-----+-----"<<endl;
        }

        if(i%9==0){//Numbered Rows
            cout<<((i/9)+1)<<" ";
        }

        //Divisor every 3rd Column
        ((i%9)!=0 && (i%9)%3==0)?cout<<"|":cout<<" ";

        //Space for each unknown value(0)
        if(sodoku.getRow1(i)==0)
            cout<<" ";
        else {
        }

        if ((i + 1) % 9 == 0)
            cout << endl;
    }
}

