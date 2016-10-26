/* 
 * File:   Box.h
 * Author: David
 *
 * Created on October 25, 2016, 4:23 PM
 */

#ifndef BOX_H
#define BOX_H

#include <bitset>
#include <iostream>
#include <iomanip>
#include <list>
using namespace std;

class Box {
protected:
    bitset<9> row1;  
    bitset<9> row2;  
    bitset<9> row3;  
    bitset<9> row4;  
    bitset<9> row5;  
    bitset<9> row6;  
    bitset<9> row7;  
    bitset<9> row8;  
    bitset<9> row9;  
public:
    Box();
    virtual ~Box();
    void setRow9(int);
    bitset<9> getRow9(int) const;
    void setRow8(int);
    bitset<9> getRow8(int) const;
    void setRow7(int);
    bitset<9> getRow7(int) const;
    void setRow6(int);
    bitset<9> getRow6(int) const;
    void setRow5(int);
    bitset<9> getRow5(int) const;
    void setRow4(int);
    bitset<9> getRow4(int) const;
    void setRow3(int);
    bitset<9> getRow3(int) const;
    void setRow2(int);
    bitset<9> getRow2(int) const;
    void setRow1(int);
    bitset<9> getRow1(int) const;
};

#endif /* BOX_H */