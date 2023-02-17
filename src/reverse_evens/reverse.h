/*********************
Name: Julian Cotto
Reverse Evens reverse.cpp source file directives
Purpose: contains directives for reverse.cpp class/data structure
**********************/

#ifndef REVERSE_H
#define REVERSE_H

#include <iostream>
#include <vector>
using std::vector;

class Reverse {
    public:
        static vector<int> getEvens(int);
        static vector<int> reverseEvens(vector<int>);
};


#endif //REVERSE_H
