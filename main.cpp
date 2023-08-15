#include "core/lib.hpp"
#include <iostream>

using core::Tetris;

int main() {
    Tetris tetris;
    for (int r = 0; r < 20; r ++) {
        for (int c = 0; c < 10; c ++) {
            std::cout << tetris.board[r][c];
        }
        std::cout << "\n";
    }
    std::cout << std::flush;
}