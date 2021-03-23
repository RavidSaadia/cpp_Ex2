//
// Created by ravid on 17/03/2021.
//
#include "doctest.h"
#include "Direction.hpp"
#include "Board.hpp"
#include <string>

using namespace ariel;
using namespace std;
const Direction anahi = ariel::Direction::Vertical;
const Direction ofki = ariel::Direction::Horizontal;
Board b;
TEST_CASE ("post and read") {
    b.post(0, 0, ofki, "hello");// hello___
    //                                           // _______
            CHECK(b.read(0, 0, ofki, 5) == "hello");
            CHECK(b.read(0, 0, anahi, 5) == "h____");
    b.post(0, 2, anahi, "world");
    b.post(4, 1, ofki, "sdon");  // hewlo
    //                                            // __o__
    //                                            // __r__
    //                                            // __l__
    //                                            // _sdon
            CHECK(b.read(0, 0, ofki, 5) == "hewlo");
            CHECK(b.read(2, 0, ofki, 5) == "__r__");
            CHECK(b.read(0, 1, anahi, 5) == "e___s");
    b.post(0, 4, anahi, "rasag");// hewlr
    //                                            // __o_a
    //                                            // __r_s
    //                                            // __l_a
    //                                            // _sdog
            CHECK(b.read(0, 0, ofki, 5) == "hewlr");
            CHECK(b.read(2, 0, ofki, 5) == "__r_s");
            CHECK(b.read(0, 1, anahi, 5) == "e___s");
    b.post(1, 0, anahi, "reut"); // hewlr
    //                                            // r_o_a
    //                                            // e_r_s
    //                                            // u_l_a
    //                                            // tsdog
            CHECK(b.read(0, 0, ofki, 5) == "hewlr");
            CHECK(b.read(2, 0, ofki, 5) == "e_r_s");
            CHECK(b.read(2, 0, anahi, 5) == "eut__");
            CHECK(b.read(0, 1, anahi, 5) == "e___s");
            CHECK(b.read(0, 1, anahi, 5) == "e___s");
            CHECK(b.read(0, 1, anahi, 5) == "e___s");
            CHECK(b.read(0, 1, anahi, 5) == "e___s");
            CHECK(b.read(0, 1, anahi, 5) == "e___s");
            CHECK(b.read(0, 1, anahi, 5) == "e___s");
            CHECK(b.read(0, 1, anahi, 5) == "e___s");
            CHECK(b.read(0, 1, anahi, 5) == "e___s");
            CHECK(b.read(0, 1, anahi, 5) == "e___s");


}

TEST_CASE ("bad input") {


}
