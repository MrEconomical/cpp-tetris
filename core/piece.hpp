#pragma once

namespace piece {
    #include "piece/piece_state.hpp"

    using piece_state::PIECE_STATES;
    using piece_state::PieceState;

    // Tetris piece type enum struct

    struct PieceType {
        enum Type: int {
            Z = 1, L, O, S, I, J, T,
        };

        constexpr PieceType(Type enum_type);

        constexpr int to_index() const;

        constexpr operator Type() const;
        explicit operator bool() const = delete;

    private:
        Type enum_type;
    };

    // Piece position on board struct

    struct Position {
        int row;
        int col;
    };

    // Piece struct

    struct Piece {
        PieceType piece_type;
        Position pos;
        int rotation;
        PieceState& state;
    };
}