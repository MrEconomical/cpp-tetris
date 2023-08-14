#include "tetris.hpp"

// Set board to empty on construction

Tetris::Tetris() {
    for (int r = 0; r < config::height; r ++) {
        for (int c = 0; c < config::width; c ++) {
            board[r][c] = 0;
        }
    }
}