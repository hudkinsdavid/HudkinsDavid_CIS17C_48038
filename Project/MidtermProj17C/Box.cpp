/* 
 * File:   Box.cpp
 * Author: David
 * 
 * Created on October 25, 2016, 4:23 PM
 */
#include "Box.h"

Box::Box() {
}

Box::~Box() {
}

void Box::setRow9(int index) {
    this->row9.flip(index);
}

bitset<9> Box::getRow9(int index) const {
    return row9[index];
}

void Box::setRow8(int index) {
    this->row8 = row8;
}

bitset<9> Box::getRow8(int index) const {
    return row8;
}

void Box::setRow7(int index) {
    this->row7 = row7;
}

bitset<9> Box::getRow7(int index) const {
    return row7;
}

void Box::setRow6(int index) {
    this->row6 = row6;
}

bitset<9> Box::getRow6(int index) const {
    return row6;
}

void Box::setRow5(int index) {
    this->row5 = row5;
}

bitset<9> Box::getRow5(int index) const {
    return row5;
}

void Box::setRow4(int index) {
    this->row4 = row4;
}

bitset<9> Box::getRow4(int index) const {
    return row4;
}

void Box::setRow3(int index) {
    this->row3 = row3;
}

bitset<9> Box::getRow3(int index) const {
    return row3;
}

void Box::setRow2(int index) {
    this->row2 = row2;
}

bitset<9> Box::getRow2(int index) const {
    return row2;
}

void Box::setRow1(int index) {
    this->row1 = row1;
}

bitset<9> Box::getRow1(int index) const {
    return row1;
}

