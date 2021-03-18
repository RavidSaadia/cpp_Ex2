//
// Created by ravid on 17/03/2021.
//

#ifndef EX2_BOARD_H
#define EX2_BOARD_H
#include "string"
#include "Direction.hpp"
using namespace std;
namespace ariel {



    class Board {

    public:

        void post(int row, int colum, ariel::Direction direction, const char string[5]);

        string read(int row, int colum, ariel::Direction direction, int length);

        void show();
    };
}

#endif //EX2_BOARD_H
