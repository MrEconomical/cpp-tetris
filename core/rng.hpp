#pragma once

#include "config.hpp"

namespace rng {
    // MINSTD LCG parameters

    inline constexpr long long A = 16807;
    inline constexpr long long M = 2147483647;

    // PRNG generator class

    class PRNG {
        long long state;
    
    public:
        PRNG(long long seed);

        void shufflePieces(int (&arr)[config::NUM_PIECES]);
    
    private:
        int next();
        double nextFloat();
    };
}