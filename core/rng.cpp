#include "rng.hpp"
#include <cassert>

using namespace rng;
using config::NUM_PIECES;

// Initialize PRNG with seed

constexpr PRNG::PRNG(long long seed): state{seed % M} {
    assert(seed != 0); // A zero seed only generates zeroes
}

// Generate next number in LCG sequence

int PRNG::next() {
    state = (state * A) % M;
    return state;
}

double PRNG::nextFloat() {
    return static_cast<double>(next() - 1) / M;
}