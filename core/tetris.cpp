#include "tetris.hpp"

Tetris::Tetris() {
    for (int r = 0; r < config::height; r ++) {
        for (int c = 0; c < config::width; c ++) {
            board[r][c] = 0;
        }
    }
}