//
// Created by alic on 17-7-23.
//

#ifndef DEMO_COORDINATE_H
#define DEMO_COORDINATE_H

#include <iostream>

class Coordinate {
public:
    int x;
    int y;

    void printX() {
        std::cout << x << std::endl;
    };

    void printY() {
        std::cout << y << std::endl;
    }
};

#endif //DEMO_COORDINATE_H
