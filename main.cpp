#include "Helpers/Util/Util.h"
#include "Animal/Dog/Dog.h"
#include "Animal/Horse/Horse.h"
#include "Animal/Cat/Cat.h"
#include "Helpers/Examples/Examples.h"

using namespace std;

int main() {
    // Instantiated Classes
    Dog dog;
    Cat cat;
    Horse horse;

    // Primitives/Common Types
    Examples::numericTypes();
    Examples::characterTypes();
    Examples::vector();
    Examples::mapping();

    /// Class Examples
    Examples::preformWorkAnimal(dog);
    Examples::preformWorkAnimal(cat);
    Examples::preformWorkAnimal(horse);
    Examples::tryLeadHorse(horse);
//    Examples::tryLeadHorse(cat);
    return 0;
}