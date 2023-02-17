/*********************
Name: Julian Cotto
Assignment 4 - Int Stack
Purpose: contains user facing interactions
**********************/

#include "main.h"


int main()
{
    int num;

    cout << "Enter a number" << endl;
    cin >> num;

    while(num < 1) { // check if the number is valid
        cout << "Error: " << num << " is not a valid number" << endl;
        cout << "Enter a number greater than 0" << endl;
        cin >> num;
    }

    vector<int> evens = Reverse::reverseEvens((Reverse::getEvens(num))); // call the reverseEvens method
    for(int even : evens) { // print the reversed evens
        cout << even << " ";
    }

    cout << endl;

    return 0;
}

