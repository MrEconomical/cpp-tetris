#include "piece.hpp"

using namespace piece;

// PieceType constructor with enum variant

constexpr PieceType::PieceType(Type enum_type): enum_type{enum_type} {}

// Convert underlying variant to index number

constexpr int PieceType::to_index() const {
    return static_cast<int>(enum_type) - 1;
}

// Allow conversion to underlying Type enum

constexpr PieceType::operator Type() const {
    return enum_type;
}