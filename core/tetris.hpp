#pragma once

#include "config.hpp"

// Tetris game class

class Tetris {
public:
    int board[config::height][config::width];

    Tetris();
};