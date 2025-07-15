//
// Created by Adam on 2023/3/15.
//

#ifndef DEMO2_GAMEMAP_H
#define DEMO2_GAMEMAP_H


#include "Food.h"
#include "Snake.h"

class gameMap {
public:
    int mapX;
    int mapY;
    int rank1;
    int rank2;
    int aMap[10000][10000];
    bool eatSound;
    Food *food;
    Snake *snake;
    int whoWin;
    int r1,r2,r3;
    clock_t nowTime,preTime;

    gameMap(int mapX, int mapY, Food* food,Snake * snake): mapX(mapX), mapY(mapY), food(food), snake(snake){
		rank1 = 0;
		rank2 = 0;
		nowTime = clock();
		preTime = nowTime;
		whoWin = 1;
		eatSound = true;
		freopen("Record.txt", "r", stdin); 
		cin>>r1>>r2>>r3;
	}
	
	void gb(int x,int y);
    void init();
    void showInit();
    void showInit(Snake *snake2);
	void showChange();
	void showChange(Snake *snake2);
    bool flushMap();
    bool flushMap(Snake *snake2);

};

#endif //DEMO2_GAMEMAP_H
