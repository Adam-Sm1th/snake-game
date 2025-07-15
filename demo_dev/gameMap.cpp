//
// Created by Adam on 2023/3/15.
//

#include "gameMap.h"
#include <bits/stdc++.h>
#include "windows.h"
#define empty	0
//************************//
#define snakeHead	13
#define snakeBody	17
#define wall	1
#define foood	2
#define eatIt	15
#define dead1	14
#define dead2	30
#define dead3	130
//***********************//
#define snakeHead2	123
#define snakeBody2	117
#define eatIt2	125
#define dead21	124
#define dead22	240
#define dead23	140
//***********************//
#define headX	snake->posXY[0][0]
#define headY	snake->posXY[0][1]
#define nextX	snake->posXY[1][0]
#define nextY	snake->posXY[1][1]
#define endX	snake->posXY[snake->length][0]
#define endY	snake->posXY[snake->length][1]

#define headX2	snake2->posXY[0][0]
#define headY2	snake2->posXY[0][1]
#define nextX2	snake2->posXY[1][0]
#define nextY2	snake2->posXY[1][1]
#define endX2	snake2->posXY[snake2->length][0]
#define endY2	snake2->posXY[snake2->length][1]
#define mapHead	aMap[headY][headX]
#define mapHead2	aMap[headY2][headX2]
#define	offset	30
#define offsetY	5
using namespace std;

void gameMap::init() {
	rank1 = 0;
	rank2 = 0;
	food->posInit();

    for(int i = 0 ; i < this->mapY ; i++) {
        for(int j = 0 ; j < this->mapX ; j++) {
            if(i == 0 || j == 0 || i == this->mapY-1 || j == this->mapX-1)
            	this->aMap[i][j] = wall;       
            else
                this->aMap[i][j] = empty;
        }
    }
    
}

void gameMap::showInit() {
	mciSendString("close eat", 0, 0, 0);
	mciSendString("close bk", 0, 0, 0);
	mciSendString("close gg", 0, 0, 0);
	
	mciSendString("open .\\music\\bk.mp3 alias bk", NULL, 0, NULL);
	mciSendString("open .\\music\\gg.mp3 alias gg", NULL, 0, NULL);
	mciSendString("play bk repeat", 0, 0, 0);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	for(int i = 0 ;i < offsetY;i++) cout<<endl; 
	for(int i = 0; i < mapY; i++) {
		
		for(int k = 0 ;k < offset ; k++) {
			printf(" ");
		}
		
		for(int j = 0; j < mapX;j++) {
			if(aMap[i][j] == wall)	printf("■");	
			else if(aMap[i][j] == empty)	printf("  ");
			if(j == mapX-1) printf("\n");
		}
	}
	
	gb(0, 10);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	printf("Tips:\n");
	printf("玩家一：\n变向: ↑↓←→    1加速2减速\n\n"); 
	printf("P键暂停 再按回车  返回主菜单");
	gb(0, 17);
	printf("加油活下去吧！\n\n");
	printf("速度越快身体越长  *加分越快*\n");
	gb(95, 12);
	printf("Record有墙伤有自伤:%d",r1);
	gb(95, 13);
	printf("Record有墙伤无自伤:%d",r2);
	gb(95, 14);
	printf("Record无墙伤有自伤:%d",r3);

	
}

void gameMap::showInit(Snake *snake2) {
	mciSendString("close eat", 0, 0, 0);
	mciSendString("close bk", 0, 0, 0);
	mciSendString("close gg", 0, 0, 0);
	
	mciSendString("open .\\music\\bk.mp3 alias bk", NULL, 0, NULL);
	mciSendString("open .\\music\\gg.mp3 alias gg", NULL, 0, NULL);
	mciSendString("play bk repeat", 0, 0, 0);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	for(int i = 0 ;i < offsetY;i++) cout<<endl; 
	for(int i = 0; i < mapY; i++) {
		
		for(int k = 0 ;k < offset ; k++) {
			printf(" ");
		}
		
		for(int j = 0; j < mapX;j++) {
			if(aMap[i][j] == wall)	printf("■");	
			else if(aMap[i][j] == empty)	printf("  ");
			if(j == mapX-1) printf("\n");
		}
	}

	gb(0, 10);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	printf("Tips:\n");
	printf("玩家一：\n变向: ↑↓←→   1加速2减速\n");
	printf("玩家二：\n变向: w s a d    j加速k减速\n");
	printf("P键暂停 再按回车  返回主菜单");
	gb(0, 20);
	printf("胜利条件：\n率先达到6666分 或 迫使对方死亡\n\n");
	printf("速度越快身体越长  *加分越快*\n");
	
}

void gameMap::gb(int x, int y) {
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD w = {x, y};
	SetConsoleCursorPosition(hOut, w);
	CONSOLE_CURSOR_INFO cursorInfo = {1, FALSE};
}

bool gameMap::flushMap() {
	bool s = true;
	
	for(int i = 0 ; i < this->mapY ; i++) {
        for(int j = 0 ; j < this->mapX ; j++) {
            if(aMap[i][j] == snakeHead || aMap[i][j] == snakeBody||aMap[i][j] == snakeHead + snakeBody||aMap[i][j] == snakeHead + snakeHead2)
            	aMap[i][j] = 0;
            	
        }
    }
    
    for(int i = 1 ; i <= snake->length ; i++) {
        int x = snake->posXY[i][0];
        int y = snake->posXY[i][1];
        
		if(aMap[y][x] != snakeBody) {
			aMap[y][x] += snakeBody;
		}		
    }
     
    if(aMap[food->posY][food->posX] != foood) {
    	aMap[food->posY][food->posX] += foood;
    }
    
    mapHead += snakeHead; //头部 
    
	switch(mapHead){
		case dead1:mciSendString("close bk", 0, 0, 0);mciSendString("play gg", 0, 0, 0);s = false;whoWin = 2;break;
		case dead2:
					if(snake->selfDamage) {
						mciSendString("close bk", 0, 0, 0);
						mciSendString("play gg", 0, 0, 0);
						s = false;
						whoWin = 2;
						break;
					} else {
						break;
					}
					
		case eatIt: rank1 += (9 - snake->speed) * snake->length;
					aMap[food->posY][food->posX] -= foood;
					food->posInit();
					
					while(aMap[food->posY][food->posX]!=0) {
							food->posInit();
					}
					snake->lengthening();
					
					mciSendString("open .\\music\\eat.mp3 alias eat", NULL, 0, NULL);
					mciSendString("play eat", 0, 0, 0);eatSound = false;
					preTime = nowTime;
					break;
		case dead3: mciSendString("close bk", 0, 0, 0);
					mciSendString("play gg", 0, 0, 0);
					s = false;
					whoWin = 2;
					break;
	}
   	return s;
	
}

bool gameMap::flushMap(Snake *snake2) {
	bool s = true;
	
	for(int i = 0 ; i < this->mapY ; i++) {
        for(int j = 0 ; j < this->mapX ; j++) {
            if(aMap[i][j] == snakeHead2 || aMap[i][j] == snakeBody2 || aMap[i][j] == snakeBody2 + snakeHead2 || aMap[i][j] == snakeHead + snakeHead2)
            	aMap[i][j] = 0;
            	
        }
    }
    for(int i = 1 ; i <= snake2->length ; i++) {
        int x = snake2->posXY[i][0];
        int y = snake2->posXY[i][1];
		
		if(aMap[y][x] != snakeBody2) {
			aMap[y][x] += snakeBody2;
		}
        	
    }
    
    if(aMap[food->posY][food->posX] != foood && aMap[food->posY][food->posX] != foood+snakeBody2){
    	aMap[food->posY][food->posX] += foood;
    }
    
    mapHead2 += snakeHead2; //头部 
    
	switch(mapHead2){
		case dead21:mciSendString("close bk", 0, 0, 0);mciSendString("play gg", 0, 0, 0);s = false;whoWin = 1;break;
		case dead22:if(snake2->selfDamage) {
						mciSendString("close bk", 0, 0, 0);
						mciSendString("play gg", 0, 0, 0);
						s = false;
						whoWin = 1;
						break;
					} else break;
		case eatIt2:rank2 += (9 - snake->speed) * snake2->length;
					aMap[food->posY][food->posX] -= foood;
					food->posInit();
					
					while(aMap[food->posY][food->posX]!=0) {
							food->posInit();
					}
					snake2->lengthening();
					
					mciSendString("open .\\music\\eat.mp3 alias eat", NULL, 0, NULL);
					mciSendString("play eat", 0, 0, 0);eatSound = false;
					preTime = nowTime;
					whoWin = 1;
					break;
		case dead23: mciSendString("close bk", 0, 0, 0);
					mciSendString("play gg", 0, 0, 0);
					s = false;
					whoWin = 1;
					break;
	}
	
   	return s;
	
}

void gameMap::showChange() {
	if(endX != snake->delX || endY != snake->delY){
		gb(snake->delX * 2 + offset, snake->delY  + offsetY);
	    printf("  ");
	}
	    
    gb(food->posX * 2 + offset,food->posY + offsetY);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    printf("¤");
    
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    for(int i = 1; i <= snake->length; i++) {
    	gb(snake->posXY[i][0] * 2 + offset, snake->posXY[i][1] + offsetY);
    	printf("●");
    }
    
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
    gb(headX * 2 + offset, headY + offsetY);
    printf("●");
    
    gb(95, 20);
    printf("Rank: %d",rank1);
    
    
}

void gameMap::showChange(Snake *snake2) {
	if(endX2 != snake2->delX || endY2 != snake2->delY){
		gb(snake2->delX * 2 + offset, snake2->delY  + offsetY);
	    printf("  ");
	}
	    
  
    
    gb(food->posX * 2 + offset,food->posY + offsetY);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    printf("¤");
    
    
    for(int i = 1; i <= snake2->length; i++) {
    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    	gb(snake2->posXY[i][0] * 2 + offset, snake2->posXY[i][1] + offsetY);
    	printf("●");
    }
    
    gb(headX2 * 2 + offset, headY2 + offsetY);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
    printf("●");
    
    gb(95, 19);
    printf("Rank: %d",rank2);
    
    
    
}


