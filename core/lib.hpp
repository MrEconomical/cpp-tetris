#pragma once

namespace core {
    #include "config.hpp"
    #include "piece.hpp"
    #include "rng.hpp"

    // Tetris game class

    class Tetris {
    public:
        int board[config::HEIGHT][config::WIDTH];

        Tetris();
    };
}