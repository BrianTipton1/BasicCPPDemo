//
// Created by brian on 8/20/23.
//

#ifndef CPPEXAMPLEPROJECT_UTIL_H
#define CPPEXAMPLEPROJECT_UTIL_H

#include <iostream>

class Util {
public:
    template<typename T>
    static void print(T val) {
        std::cout << val;
    }

    template<typename T>
    static void printLine(T val) {
        std::cout << val << std::endl;
    }

    static std::string readLine(const std::string &prompt = "", bool newLine = true);

    static std::string redString(const std::string &s);
    static std::string greenString(const std::string &s);
};


#endif //CPPEXAMPLEPROJECT_UTIL_H
