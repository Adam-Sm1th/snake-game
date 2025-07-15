//
// Created by Adam on 2023/3/15.
//

#include <cstdlib>
#include "Food.h"

void Food::posInit() {
    this->posX = (int)(rand() % (mapX - 2) + 1);
    this->posY = (int)(rand() % (mapY - 2) + 1);
}
