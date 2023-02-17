/*********************
Name: Julian Cotto
Assignment 4 - Int Stack
Purpose: contains class functions for reverse class/data structure
**********************/

#include "reverse.h"

vector<int> Reverse::getEvens(int num) { // returns a vector of even numbers from num to 2

    vector<int> evens = {};

    for(int i = 0; i < num; i++) {
        evens.push_back((num - i) * 2);
    }

    return evens;
}

vector<int> Reverse::reverseEvens(vector<int> evens) { // reverses the vector of even numbers
    vector<int> reversed = {};
    for (int i = 0; i < reversed.size() ; i++) {
        reversed.push_back(reversed[i] - 1);
    }

    return evens;
}



