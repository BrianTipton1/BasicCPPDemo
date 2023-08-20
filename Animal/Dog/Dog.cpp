//
// Created by brian on 8/20/23.
//

#include "Dog.h"

Dog::Dog() : Animal("woof", 5, 10) {}

std::string Dog::fetch() {
    return "bone";
}
