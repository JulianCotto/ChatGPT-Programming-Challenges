/*********************
Name: Julian Cotto
Reverse Evens Test
Purpose: contains test cases for reverse.cpp
**********************/

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../src/reverse_evens/reverse.h"

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("test get_eves()") { //still needs work
    vector<int> evens = Reverse::getEvens(5);
    REQUIRE(evens[0] == 10);
    REQUIRE(evens[1] == 8);
    REQUIRE(evens[2] == 6);
    REQUIRE(evens[3] == 4);
    REQUIRE(evens[4] == 2);


}