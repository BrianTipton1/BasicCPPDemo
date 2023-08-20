//
// Created by brian on 8/20/23.
//

#include "Util.h"
#include <iostream>

std::string Util::readLine(const std::string &prompt, bool newLine) {
    if (!prompt.empty()) {

        if (newLine) {
            Util::printLine(prompt);
        } else {
            Util::print(prompt);
        }

    }
    std::string s;
    std::getline(std::cin, s);
    return s;
}

std::string Util::greenString(const std::string &s) {
    return "\033[32m" + s + "\033[0m";
}

std::string Util::redString(const std::string &s) {
    return "\033[31m" + s + "\033[0m";
}
