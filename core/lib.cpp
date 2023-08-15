#include "lib.hpp"

using namespace core;
using config::WIDTH, config::HEIGHT;

// Set board to empty on construction

Tetris::Tetris() {
    for (int r = 0; r < HEIGHT; r ++) {
        for (int c = 0; c < WIDTH; c ++) {
            board[r][c] = 0;
        }
    }
}