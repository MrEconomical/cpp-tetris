#include "piece_states.hpp"
#include "piece.hpp"

// PieceType constructor with enum variant

constexpr PieceType::PieceType(Type type): type{type} {}

// Convert underlying variant to number

constexpr int PieceType::to_number() const {
    return static_cast<int>(type);
}

// Allow conversion to underlying Type enum

constexpr PieceType::operator Type() const {
    return type;
}