//
// Created by brian on 8/20/23.
//

#include <chrono>
#include "Horse.h"
#include "random"

Horse::Horse() : Animal("neigh", 50, 100) {}

bool Horse::canLeadToWater() {
    unsigned seed =
            std::chrono::system_clock::now()
                    .time_since_epoch()
                    .count();
    std::default_random_engine generator(seed);
    std::uniform_int_distribution<int> distribution(0, 1);
    int coinFlip = distribution(generator);
    return coinFlip == 1;
}
