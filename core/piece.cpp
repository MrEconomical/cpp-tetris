#include "piece.hpp"

using namespace piece;

// PieceType constructor with enum variant

constexpr PieceType::PieceType(Type type): type{type} {}

// Convert underlying variant to index number

constexpr int PieceType::to_index() const {
    return static_cast<int>(type) - 1;
}

// Allow conversion to underlying Type enum

constexpr PieceType::operator Type() const {
    return type;
}