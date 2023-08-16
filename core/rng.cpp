#include "rng.hpp"
#include <stdexcept>

using namespace rng;
using config::NUM_PIECES;

// Initialize PRNG with seed

PRNG::PRNG(long long seed) {
    if (seed == 0) {
        throw std::invalid_argument("seed cannot be zero");
    }
    state = seed % M;
}

// Generate next number in LCG sequence

int PRNG::next() {
    state = (state * A) % M;
    return state;
}

double PRNG::nextFloat() {
    return static_cast<double>(next() - 1) / M;
}