//
// Created by brian on 8/20/23.
//

#ifndef CPPEXAMPLEPROJECT_DOG_H
#define CPPEXAMPLEPROJECT_DOG_H

#include "../Animal.h"

class Dog : public Animal {
public:
    std::string fetch();
    Dog();
};


#endif //CPPEXAMPLEPROJECT_DOG_H
