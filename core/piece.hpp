#pragma once

// Piece type enum struct

struct PieceType {
    enum Type: int {
        Z, L, O, S, I, J, T,
    };

    constexpr PieceType(Type type);

    constexpr int to_number() const;

    constexpr operator Type() const;
    explicit operator bool() const = delete;

private:
    Type type;
};

// Piece position struct

struct Position {
    int row;
    int col;
};

// Piece struct

struct Piece {
    PieceType type;
    Position pos;
};