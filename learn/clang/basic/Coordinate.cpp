//
// Created by alic on 17-7-23.
//

#include "Coordinate.h"

int main(){
    //栈方式访问
    Coordinate co;
    co.x = 10;
    co.y = 20;
    co.printX();
    co.printY();

    //队方式访问
    Coordinate *coordinate = new Coordinate();

    coordinate->x = 10;
    coordinate->y = 30;
    coordinate->printX();
    coordinate->printY();

}