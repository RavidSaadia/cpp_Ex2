//
// Created by ravid on 17/03/2021.
//

#ifndef EX2_BOARD_H
#define EX2_BOARD_H

#include <map>
#include <vector>
#include "string"
#include "Direction.hpp"

namespace ariel {


    class Board {
    private:

//        std::map<std::map<int,int>,char> v;
        std::vector<std::vector<char>> v;

    public:
        Board(){};//constructor

        void post(unsigned int row, unsigned int colum, ariel::Direction direction,  std::string s);

        std::string read(unsigned int row, unsigned int colum, ariel::Direction direction, int length);

        void show();
    };


}

#endif //EX2_BOARD_H
