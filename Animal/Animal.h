//
// Created by brian on 8/20/23.
//

#ifndef CPPEXAMPLEPROJECT_ANIMAL_H
#define CPPEXAMPLEPROJECT_ANIMAL_H

#include <iostream>
#include <utility>
#include "../Helpers/Util/Util.h"


class Animal {
private:

    std::string message;
    int foodLevel;
    int bowlSize;

protected:
    bool inBowlBounds(int quantity) const {
        return 0 <= (quantity + this->foodLevel) && (quantity + this->foodLevel) <= this->bowlSize;
    }

public:
    Animal(std::string message, int foodLevel, int bowlSize) : message(std::move(message)), foodLevel(foodLevel),
                                                               bowlSize(bowlSize) {}

    std::string getSpeakMessage() {
        return this->message;
    }

    void speak() {
        Util::printLine(this->message);
    }

    void addFoodToBowl(int quantity) {
        if (!this->inBowlBounds(quantity)) {
            throw std::runtime_error("Level outside of bowl bounds");
        }
        this->foodLevel += quantity;
    }

    int getFoodLevel() const {
        return this->foodLevel;
    }

    int getBowlSize() {
        return this->bowlSize;
    }
};


#endif //CPPEXAMPLEPROJECT_ANIMAL_H
