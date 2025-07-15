//
// Created by Adam on 2023/3/15.
//

#ifndef SNAKE_GAME_SNAKE_H
#define SNAKE_GAME_SNAKE_H
#include <bits/stdc++.h>

class Snake {
public:
	int speed;
    int length;
    int posXY[10000][2];
    int delX;
    int delY;
    int dirX;
    int dirY;
    int cdirX;
    int cdirY; 
	int mapX;
	int mapY;
	int swMode;
	int player;
	bool selfDamage;
	 
    Snake(int speed = 3, int mapX = 25, int mapY = 25, int player = 0) : speed(speed), mapX(mapX), mapY(mapY), player(player){
        length = 3;
		swMode = 1;
		selfDamage = true;
    }

	void init();
    void lengthening();
    void move();
    void speedUp();
    void speedDown();
    void turnDir(int dirX, int dirY);
    void turnUp();
    void turnDown();
    void turnLeft();
    void turnRight();
    void changeDir();

};
#endif //SNAKE_GAME_SNAKE_H
