// #define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "mat.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

TEST_CASE("Check good input - 1"){
    CHECK(mat(13, 5, '@', '-') == "@@@@@@@@@@@@@\n"
"@-----------@\n"
"@-@@@@@@@@@-@\n"
"@-----------@\n"
"@@@@@@@@@@@@@");
}


TEST_CASE("Check good input - 2"){
    CHECK(mat(9, 5, '@', '-') == "@@@@@@@@@\n"
"@-------@\n"
"@-@@@@@-@\n"
"@-------@\n"
"@@@@@@@@@");
}


TEST_CASE("Check good input - 3"){
    CHECK(mat(7, 7, '@', '-') == "@@@@@@@\n"
"@-----@\n"
"@-@@@-@\n"
"@-@-@-@\n"
"@-@@@-@\n"
"@-----@\n"
"@@@@@@@");
}


TEST_CASE("Bad input - 1") {
    CHECK_THROWS(mat(10, 6, '$', '%'));
}


TEST_CASE("Must contain 2 different symbols") {
    CHECK_THROWS(mat(9, 5, '$', '$'));
}


TEST_CASE("Bad input - 2") {
    CHECK_THROWS(mat(12, 6, '$', '%'));
}

TEST_CASE("Wrong Answer - 1") {
       CHECK_THROWS(mat(9, 5, '@', '-') == "@@@@@@@@@\n"
"@---@---@\n"
"@-@@@@@-@\n"
"@-------@\n"
"@@@@@@@@@");
}



TEST_CASE("Check good input - 4"){
    CHECK(mat(5, 5, '@', '-') == "@@@@@\n"
"@---@\n"
"@-@-@\n"
"@---@\n"
"@@@@@");
}


TEST_CASE("Check good input - 5"){
    CHECK(mat(5, 5, '@', '+') == "@@@@@\n"
"@+++@\n"
"@+@+@\n"
"@+++@\n"
"@@@@@");
}


TEST_CASE("Check good input - 6"){
    CHECK(mat(1, 1, '*', '-') == "*");
}


TEST_CASE("Check good input - 7"){
    CHECK(mat(3, 3, '@', '-') == "@@@\n"
"@-@\n"
"@@@\n");
}


TEST_CASE("Check good input - 8"){
    CHECK(mat(13, 9, '@', '-') == "@@@@@@@@@@@@@\n"
"@-----------@\n"
"@-@@@@@@@@@-@\n"
"@-@-------@-@\n"
"@-@-@@@@@-@-@\n"
"@-@-------@-@\n"
"@-@@@@@@@@@-@\n"
"@-----------@\n"
"@@@@@@@@@@@@@");
}


TEST_CASE("Cant be 0 length columns"){
    CHECK_THROWS(mat(0, 5, '@', '-'));
}

TEST_CASE("Cant be 0 length rows"){
    CHECK_THROWS(mat(5, 0, '@', '-'));
}


TEST_CASE("Cant have negative numbers"){
    CHECK_THROWS(mat(5, -3, '@', '-'));
}



TEST_CASE("Must have symbols"){
    CHECK_THROWS(mat(15, 7, 'B', '-'));
}



TEST_CASE("Must be a char type symbol"){
    CHECK_THROWS(mat(5, 3, '@', 7));
}



TEST_CASE("Wrong Answer - 2") {
       CHECK_THROWS(mat(9, 7, '@', '-') == "@@@@@@@@@\n"
"@-------@\n"
"@-@@@@@-@\n"
"@-@---@-@\n"
"@@@@@@@@@\n"
"@-------@\n"
"@-@@@@@-@");
}


TEST_CASE("Check good input - 9"){
    CHECK(mat(7, 3, '#', '-') == "!!!!!!!\n"
"!-----!\n"
"!!!!!!!");
}


TEST_CASE("Check good input - 10"){
    CHECK(mat(3, 5, '@', '+') == "@@@\n"
    "@+@\n"
    "@+@\n"
    "@+@\n"
    "@@@");
}


TEST_CASE("Check good input - 11"){
    CHECK(mat(5, 7, '!', '-') == "!!!!!\n"
    "!---!\n"
    "!-!-!\n"
    "!-!-!\n"
    "!-!-!\n"
    "!---!\n"
    "!!!!!");
}


TEST_CASE("Check good input - 12"){
    CHECK(mat(5, 9, '!', '-') == "!!!!!\n"
    "!---!\n"
    "!-!-!\n"
    "!-!-!\n"
ִ    "!-!-!\n"
    "!-!-!\n"
    "!-!-!\n"
    "!---!\n"
    "!!!!!");
}

