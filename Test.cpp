//
// Created by ravid on 17/03/2021.
//
#include "doctest.h"
#include "Direction.hpp"
#include "Board.hpp"
#include <string>

using namespace ariel;
using namespace std;
const Direction anahi = Direction::Vertical;
const Direction ofki = Direction::Horizontal;
Board b = Board();
//unsigned int five = 5;
TEST_CASE ("post and read") {
    b.post(0, 0, Direction::Horizontal, string("hello"));// hello___
    //                                                                 // _______

            CHECK(b.read(0, 0, Direction::Horizontal, (unsigned int) 5) == string("hello"));
            CHECK(b.read(0, 0, Direction::Vertical, (unsigned int)5) == string("h____"));
    b.post(0, 2, Direction::Vertical, string("world"));
    b.post(4, 1, Direction::Horizontal, string("sdon"));  // hewlo
    //                                                               // __o__
    //                                                               // __r__
    //                                                               // __l__
    //                                                               // _sdon
            CHECK(b.read(0, 0, Direction::Horizontal, 5) == string("hewlo"));
            CHECK(b.read(2, 0, Direction::Horizontal, 5) == string("__r__"));
            CHECK(b.read(0, 1, Direction::Vertical, 5) == string("e___s"));
    b.post(0, 4, Direction::Vertical, string("rasag"));// hewlr
    //                                                               // __o_a
    //                                                               // __r_s
    //                                                               // __l_a
    //                                                               // _sdog
            CHECK(b.read(0, 0, Direction::Horizontal, 5) == string("hewlr"));
            CHECK(b.read(2, 0, Direction::Horizontal, 5) == string("__r_s"));
            CHECK(b.read(0, 1, Direction::Vertical, 5) == string("e___s"));
    b.post(1, 0, Direction::Vertical, string("reut")); // hewlr
    //                                                               // r_o_a
    //                                                               // e_r_s
    //                                                               // u_l_a
    //                                                               // tsdog
            CHECK(b.read(0, 0, Direction::Horizontal, 5) == string("hewlr"));
            CHECK(b.read(2, 0, Direction::Horizontal, 5) == string("e_r_s"));
            CHECK(b.read(2, 0, Direction::Vertical, 5) == string("eut__"));
            CHECK(b.read(2, 0, Direction::Vertical, 5) == string("eut__"));
            CHECK(b.read(2, 0, Direction::Vertical, 5) == string("eut__"));
            CHECK(b.read(2, 0, Direction::Vertical, 5) == string("eut__"));
            CHECK(b.read(2, 0, Direction::Vertical, 5) == string("eut__"));
            CHECK(b.read(2, 0, Direction::Vertical, 5) == string("eut__"));
            CHECK(b.read(2, 0, Direction::Vertical, 5) == string("eut__"));
            CHECK(b.read(2, 0, Direction::Vertical, 5) == string("eut__"));
            CHECK(b.read(2, 0, Direction::Vertical, 5) == string("eut__"));
            CHECK(b.read(2, 0, Direction::Vertical, 5) == string("eut__"));
            CHECK(b.read(2, 0, Direction::Vertical, 5) == string("eut__"));
            CHECK(b.read(2, 0, Direction::Vertical, 5) == string("eut__"));
            CHECK(b.read(2, 0, Direction::Vertical, 5) == string("eut__"));
            CHECK(b.read(2, 0, Direction::Vertical, 5) == string("eut__"));
            CHECK(b.read(2, 0, Direction::Vertical, 5) == string("eut__"));
            CHECK(b.read(2, 0, Direction::Vertical, 5) == string("eut__"));


}

TEST_CASE ("bad input") {


}
