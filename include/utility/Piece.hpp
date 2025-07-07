#ifndef PIECE_HPP
#define PIECE_HPP

#include <cstdint>

// enum for colors
enum class Color : uint8_t {
    WHITE, BLACK, NO_COLOR, COLOR_NB = 2
};

// enum for piece types
enum class PieceType : uint8_t {
    PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING, NO_PIECETYPE, PIECETYPE_NB = 6
};

/* enum for pieces (color + type)
NO_PIECE is first for easy initialization */
enum class Piece : uint8_t {
    NO_PIECE, W_PAWN, W_KNIGHT, W_BISHOP, W_ROOK, W_QUEEN, W_KING,
    B_PAWN, B_KNIGHT, B_BISHOP, B_ROOK, B_QUEEN, B_KING, PIECE_NB = 12
};

#endif PIECE_HPP