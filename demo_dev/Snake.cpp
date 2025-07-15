//
// Created by Adam on 2023/3/15.
//

#include "Snake.h"
#include "windows.h"
using namespace std;

void Snake::lengthening() {
    length++;
    posXY[length][0] = delX;
    posXY[length][1] = delY;
}

void Snake::move() {
	delX = posXY[length][0];
	delY = posXY[length][1];
	
    for(int i = length;i >= 1;i--) {
        posXY[i][0] = posXY[i - 1][0];
        posXY[i][1] = posXY[i - 1][1];
    }
    
    posXY[0][0] += dirX;
    posXY[0][1] += dirY;
    
    if(swMode == 0) {
    	if(posXY[0][0] < 1) posXY[0][0] = mapX - 2;
	    if(posXY[0][1] < 1) posXY[0][1] = mapY - 2;
	    if(posXY[0][0] > mapX - 2) posXY[0][0] = 1;
	    if(posXY[0][1] > mapY - 2) posXY[0][1] = 1;
    }
	    
}

void Snake::speedUp() {
	if(speed > 1) {
		this->speed--;
	}
    
}

void Snake::speedDown() {
	if(speed < 9) {
		this->speed++;
	}
}

void Snake::turnDir(int cdirX, int cdirY) {
    this->cdirX = cdirX;
    this->cdirY = cdirY;
}

void Snake::changeDir() {
	dirX = cdirX;
	dirY = cdirY;
}

void Snake::turnLeft() {
	if(dirX == 0 && dirY == 1) {
		turnDir(-1, 0);
	} else if(dirX == 0 && dirY == -1) {
		turnDir(-1, 0);
	}
}

void Snake::turnRight() {
	if(dirX == 0 && dirY == 1) {
		turnDir(1, 0);
	} else if(dirX == 0 && dirY == -1) {
		turnDir(1, 0);
	}
}

void Snake::turnUp() {
	if(dirX == 1 && dirY == 0) {
		turnDir(0, -1);
	} else if(dirX == -1 && dirY == 0) {
		turnDir(0, -1);
	}
	
}

void Snake::turnDown() {
	if(dirX == 1 && dirY == 0) {
		turnDir(0, 1);
	} else if(dirX == -1 && dirY == 0) {
		turnDir(0, 1);
	}
}

void Snake::init() {
		length = 3;
		speed = 3;
        
        	if(player == 1) {
			posXY[0][0] = 4;
	        posXY[0][1] = 1;
	
	        posXY[1][0] = 3;
	        posXY[1][1] = 1;
	
	        posXY[2][0] = 2;
	        posXY[2][1] = 1;
	
	        posXY[3][0] = 1;
	        posXY[3][1] = 1;
	        
	        dirX = 1;
			dirY = 0;
		} else {
			posXY[0][0] = mapX - 5;
	        posXY[0][1] = mapY - 2;
	
	        posXY[1][0] = mapX - 4;
	        posXY[1][1] = mapY - 2;
	
	        posXY[2][0] = mapX - 3;
	        posXY[2][1] = mapY - 2;;
	
	        posXY[3][0] = mapX - 2;
	        posXY[3][1] = mapY - 2;
	        
	        dirX = -1;
			dirY = 0;
		}
		
        cdirX = dirX;
        cdirY = dirY;
        delX = 0;
        delY = 0;
}
