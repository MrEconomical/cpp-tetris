#pragma once

using PieceState = int[4][4];

inline constexpr PieceState PIECE_STATES[7][4]{
    // Z rotations
    {
        {
            {1, 1, 0, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
        },
        {
            {0, 0, 1, 0},
            {0, 1, 1, 0},
            {0, 1, 0, 0},
            {0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0},
            {1, 1, 0, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0},
        },
        {
            {0, 1, 0, 0},
            {1, 1, 0, 0},
            {1, 0, 0, 0},
            {0, 0, 0, 0},
        },
    },

    // L rotations
    {
        {
            {0, 0, 2, 0},
            {2, 2, 2, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
        },
        {
            {0, 2, 0, 0},
            {0, 2, 0, 0},
            {0, 2, 2, 0},
            {0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0},
            {2, 2, 2, 0},
            {2, 0, 0, 0},
            {0, 0, 0, 0},
        },
        {
            {2, 2, 0, 0},
            {0, 2, 0, 0},
            {0, 2, 0, 0},
            {0, 0, 0, 0},
        },
    },

    // O rotations (for efficiency)
    {
        {
            {0, 3, 3, 0},
            {0, 3, 3, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
        },
        {
            {0, 3, 3, 0},
            {0, 3, 3, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
        },
        {
            {0, 3, 3, 0},
            {0, 3, 3, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
        },
        {
            {0, 3, 3, 0},
            {0, 3, 3, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
        },
    },

    // S rotations
    {
        {
            {0, 4, 4, 0},
            {4, 4, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
        },
        {
            {0, 4, 0, 0},
            {0, 4, 4, 0},
            {0, 0, 4, 0},
            {0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0},
            {0, 4, 4, 0},
            {4, 4, 0, 0},
            {0, 0, 0, 0},
        },
        {
            {4, 0, 0, 0},
            {4, 4, 0, 0},
            {0, 4, 0, 0},
            {0, 0, 0, 0},
        },
    },

    // I rotations
    {
        {
            {0, 0, 0, 0},
            {5, 5, 5, 5},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
        },
        {
            {0, 0, 5, 0},
            {0, 0, 5, 0},
            {0, 0, 5, 0},
            {0, 0, 5, 0},
        },
        {
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {5, 5, 5, 5},
            {0, 0, 0, 0},
        },
        {
            {0, 5, 0, 0},
            {0, 5, 0, 0},
            {0, 5, 0, 0},
            {0, 5, 0, 0},
        },
    },

    // J rotations
    {
        {
            {6, 0, 0, 0},
            {6, 6, 6, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
        },
        {
            {0, 6, 6, 0},
            {0, 6, 0, 0},
            {0, 6, 0, 0},
            {0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0},
            {6, 6, 6, 0},
            {0, 0, 6, 0},
            {0, 0, 0, 0},
        },
        {
            {0, 6, 0, 0},
            {0, 6, 0, 0},
            {6, 6, 0, 0},
            {0, 0, 0, 0},
        },
    },

    // T rotations
    {
        {
            {0, 7, 0, 0},
            {7, 7, 7, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
        },
        {
            {0, 7, 0, 0},
            {0, 7, 7, 0},
            {0, 7, 0, 0},
            {0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0},
            {7, 7, 7, 0},
            {0, 7, 0, 0},
            {0, 0, 0, 0},
        },
        {
            {0, 7, 0, 0},
            {7, 7, 0, 0},
            {0, 7, 0, 0},
            {0, 0, 0, 0},
        },
    },
};