//
// Created by brian on 8/20/23.
//
#include "Examples.h"

void Examples::vector() {
    std::vector<int> my_nums = {1, 2, 3, 4, 5};
    for (const auto &item: my_nums) {
        Util::printLine(item);
    }
}

void Examples::characterTypes() {
    char c = 'A';
    Util::print("This is a character: ");
    Util::printLine(c);

    std::string s = "This is a string";
    Util::printLine(s);
}

void Examples::numericTypes() {
    int someInteger = 1;
    Util::print("This is a integer: ");
    Util::printLine(someInteger);

    // 8 bytes
    double someDouble = 1.000000000000001;
    Util::print("This is a double: ");
    Util::printLine(someDouble);

    // 4 bytes
    float someFloat = 1.0000001;
    Util::print("This is a float: ");
    Util::printLine(someFloat);

    float largeScifloat = 1e+5;
    double largeSciDouble = 1e+5;
    Util::print("This is a positive double defined in scientific notation: ");
    Util::printLine(largeSciDouble);
    Util::printLine(largeSciDouble == 100000 ? "largeScidouble is Equal to 100,000" : "not possible");

    float smallScifloat = 1e-5;
    double smallSciDouble = 1e-5;
    Util::print("This is a positive double defined in scientific notation: ");
    Util::printLine(smallSciDouble);
    Util::printLine(smallSciDouble == 0.00001 ? "smallScidouble is Equal to 0.00001" : "not possible");
}

void Examples::preformWorkAnimal(Animal animal) {
    Util::printLine(animal.getBowlSize());
}

void Examples::tryLeadHorse(Horse horse) {
    for (int i = 0; i < 100; i++) {
        std::this_thread::sleep_for(std::chrono::microseconds(17));
        Util::printLine(
                horse.canLeadToWater() ?
                Util::greenString("Can Lead to water") :
                Util::redString("Can't Lead to water")
        );
    }
}

void Examples::mapping() {
    std::map<std::string, std::string> keyValuePair;
    keyValuePair["KEY_1"] = "VALUE_1";
    keyValuePair["KEY_2"] = "VALUE_2";
    keyValuePair["KEY_3"] = "VALUE_3";
    keyValuePair["KEY_4"] = "VALUE_4";

    Util::printLine(keyValuePair["KEY_1"]);
//    Util::printLine(keyValuePair["KEY_100"]);
}

