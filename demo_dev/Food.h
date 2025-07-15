//
// Created by Adam on 2023/3/15.
//

#ifndef SRC_FOOD_H
#define SRC_FOOD_H

#include <bits/stdc++.h>
using namespace std;

class Food {
public:
    int posX;
    int posY;
    int mapX;
    int mapY;

    Food(int mapX, int mapY): mapX(mapX), mapY(mapY) {
        srand(time(0));
    }

    void posInit();

};


#endif //SRC_FOOD_H
