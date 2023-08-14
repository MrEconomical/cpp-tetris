#pragma once

#include "config.hpp"

using config::WIDTH, config::HEIGHT;

// Tetris game class

class Tetris {
public:
    int board[HEIGHT][WIDTH];

    Tetris();
};