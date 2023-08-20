//
// Created by brian on 8/20/23.
//

#ifndef CPPEXAMPLEPROJECT_EXAMPLES_H
#define CPPEXAMPLEPROJECT_EXAMPLES_H

#include "map"
#include <thread>
#include "../Util/Util.h"
#include "vector"
#include "../../Animal/Horse/Horse.h"

class Examples {
public:
    static void numericTypes();
    static void characterTypes();
    static void vector();
    static void tryLeadHorse(Horse horse);
    static void preformWorkAnimal(Animal animal);
    static void mapping();
};


#endif //CPPEXAMPLEPROJECT_EXAMPLES_H
