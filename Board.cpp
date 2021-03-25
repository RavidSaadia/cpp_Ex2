//
// Created by ravid on 17/03/2021.
//

#include <iostream>
#include "Board.hpp"
#include "string"
#include "Direction.hpp"

using namespace std;
using namespace ariel;
const Direction anahi = Direction::Vertical;
const Direction ofki = Direction::Horizontal;

ariel::Board::Board() {
    this->v = std::vector<std::vector<char>>('_');

}


void Board::post(unsigned int row, unsigned int colum, ariel::Direction direction, string s) {

    while (v.size() < row + s.length()) {
        v.push_back(vector<char>());// insted ==>  v.push_back(vector<char>('_'));
    }
    for (unsigned int i = 0; i < row + s.length(); ++i) {
        while (v.at(i).size() < colum + s.length()) {
            v.at(i).push_back('_');

        }
    }
//    while (v.at(row).size() < colum + s.length()) {
//        v.at(row).push_back('_');
//
//    }
    if (direction == ofki) {
        for (unsigned int i = 0; i < s.length(); ++i) {
            v.at(row).at(colum + i) = s.at(i);

        }
    } else if (direction == anahi) {
        for (unsigned int i = 0; i < s.length(); ++i) {
            v.at(row + i).at(colum) = s.at(i);

        }
    } else {
        cout << "no direction!";
    }

}

string Board::read(unsigned int row, unsigned int colum, ariel::Direction direction, unsigned int length) {
    string ans;


    while (v.size() < row + length) {

        v.push_back(std::vector<char>('_'));
    }
    while (v.at(row).size() < colum + length) {
        v.at(row).push_back('_');

    }
    if (direction == anahi) {
        for (unsigned int i = 0; i < length; ++i) {
            while (v.at(row + i).size() < colum + length) {
                v.at(row + i).push_back('_');

            }
        }
        for (unsigned int i = 0; i < length; ++i) {
            ans += v.at(row++).at(colum);

        }

    } else if (direction == ofki) {
        for (unsigned int i = 0; i < length; ++i) {
            ans += v.at(row).at(colum++);

        }
    } else {
        cout << "no direction!";
    }
//    cout << ans << endl; // for checking
    return ans;
}

void Board::show() {

}


Board::~Board() = default;
