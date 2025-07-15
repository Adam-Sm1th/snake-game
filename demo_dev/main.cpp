#include <bits/stdc++.h>
#include "Food.h"
#include "Snake.h"
#include "gameMap.h"
#include <windows.h>
#include "Menu.h"
#include <conio.h>

#define TIMES 30
#define mapX	28 
#define mapY	28 
#define dirX	snake.dirX
#define dirY	snake.dirY

#define	ENTER	13
#define SUP 49 //键盘： 1 
#define SDOWN	50 //键盘：2 
#define UP 72 //方向键：上
#define DOWN 80 //方向键：下
#define LEFT 75 //方向键：左
#define RIGHT 77 //方向键：右
#define ESC 27
#define timeOut 112
#define posW	119
#define posA	97
#define posS	115
#define posD	100
#define spJ		106
#define spK		107
using namespace std;

void gb(int x, int y);
Snake snake(3, mapX, mapY,1);
Snake snake2(3, mapX, mapY,2);
Food food(mapX,mapY);
gameMap gamemap(mapX,mapY,&food,&snake);
Menu menu(85,10);
int ch;

void delay(int time) {
	for(int i = 1 ;i <= 100 ;i++)
		for(int j = 1;j <= 100 ;j++)
			for(int k = 1;k <= time ;k++){
				
			}
}
void HideCursor()
{
	CONSOLE_CURSOR_INFO cursor;    
	cursor.bVisible = FALSE;    
	cursor.dwSize = sizeof(cursor);    
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);    
	SetConsoleCursorInfo(handle, &cursor);
}

void flashRecord() {
	if(snake.swMode == 1 && snake.selfDamage == true) {
		if(gamemap.rank1 > gamemap.r1) gamemap.r1 = gamemap.rank1;
	} else if(snake.swMode == 1 && snake.selfDamage == false) {
		if(gamemap.rank1 > gamemap.r2) gamemap.r2 = gamemap.rank1;
	} else if(snake.swMode == 0 && snake.selfDamage == true) {
		if(gamemap.rank1 > gamemap.r3) gamemap.r3 = gamemap.rank1;
	}
}

void runSp() {
	system("cls");

	snake.init();
	gamemap.init();
	gamemap.showInit();
	
	clock_t nowTime,preTime;
	nowTime = clock();
	preTime = nowTime; 
	while(1){
		//HideCursor();
		nowTime = clock();
		gamemap.nowTime = nowTime;
		
		if((gamemap.nowTime - gamemap.preTime) > 700 && gamemap.eatSound == false) {
			mciSendString("close eat", 0, 0, 0);
			gamemap.eatSound = true;
		}
		if(nowTime - preTime > TIMES * snake.speed){
			preTime = nowTime;
			snake.changeDir();
			snake.move();
			gamemap.showChange();
			if(!gamemap.flushMap()) {
				gamemap.gb(95,20);
				printf("P1You LOSE~! RANK:%d",gamemap.rank1);
				gamemap.gb(45,30);
				printf("-----按回车返回主菜单----"); 
				break;
			}
		}
		
		if(kbhit()){
			ch = getch(); 
			if(ch == LEFT)	snake.turnLeft();
			if(ch == RIGHT)	snake.turnRight();
			if(ch == UP)	snake.turnUp();
			if(ch == DOWN)	snake.turnDown();
			if(ch == SUP)	snake.speedUp();
			if(ch == SDOWN)	snake.speedDown(); 	
			if(ch == timeOut) {
				while(1) {
					ch = getch(); 
					if(ch == timeOut) break;
					if(ch == ENTER) return;
				}
			}
		} 
		
	}
	
	while(1) {
		if(kbhit()){
			ch = getch(); 
			if(ch == ENTER)	break;	
		} 
	}
		
} 

void runTp() {
	system("cls"); 

	snake.init();
	snake2.init();
	gamemap.init();
	gamemap.showInit(&snake2);
	
	clock_t nowTime,preTime;
	clock_t nowTime2,preTime2;
	nowTime = clock();
	preTime = nowTime; 
	nowTime2 = clock();
	preTime2 = nowTime2;
	
	while(1){
		//HideCursor();
		nowTime = clock();
		gamemap.nowTime = nowTime;
		nowTime2 = clock();
		gamemap.nowTime = nowTime2;
		
		if((gamemap.nowTime - gamemap.preTime) > 700 && gamemap.eatSound == false) {
			mciSendString("close eat", 0, 0, 0);
			gamemap.eatSound = true;
		}
		
		if(nowTime - preTime > TIMES * snake.speed){
			preTime = nowTime;
			snake.changeDir();
			snake.move();
			gamemap.showChange();
			if(!gamemap.flushMap()) {
				
				if (gamemap.whoWin == 1 || gamemap.rank1 >= 6666) {
					gamemap.gb(95,12);
					printf("Play1 Win!");
				} else if(gamemap.whoWin == 2 || gamemap.rank2 >= 6666) {
					gamemap.gb(95,12);
					printf("Play2 Win!");
				}
				gamemap.gb(45,30);
				printf("-----按回车返回主菜单----");
				break;
			}
		}
		
		if(nowTime2 - preTime2 > TIMES * snake2.speed){
			preTime2 = nowTime2;
			snake2.changeDir();
			snake2.move();
			gamemap.showChange(&snake2);
			if(!gamemap.flushMap(&snake2)) {
				if (gamemap.whoWin == 1 || gamemap.rank1 >= 6666) {
					gamemap.gb(95,12);
					printf("Play1 Win!");
				} else if(gamemap.whoWin == 2 || gamemap.rank2 >= 6666) {
					gamemap.gb(95,12);
					printf("Play2 Win!");
				}
				gamemap.gb(45,30);
				printf("-----按回车返回主菜单----");
				break;
			}
		}
		
		if(kbhit()){
			ch = getch(); 
			if(ch == timeOut) {
				while(1) {
					ch = getch(); 
					if(ch == timeOut) break;
					if(ch == ENTER) return;
				}
			}
			if(ch == LEFT)	snake.turnLeft();
			if(ch == RIGHT)	snake.turnRight();
			if(ch == UP)	snake.turnUp();
			if(ch == DOWN)	snake.turnDown();
			if(ch == SUP)	snake.speedUp();
			if(ch == SDOWN)	snake.speedDown(); 
				
			if(ch == posA)	snake2.turnLeft();
			if(ch == posD)	snake2.turnRight();
			if(ch == posW)	snake2.turnUp();
			if(ch == posS)	snake2.turnDown();
			if(ch == spJ)	snake2.speedUp();
			if(ch == spK)	snake2.speedDown(); 
		} 
	
	}
	
	while(1) {
		if(kbhit()){
			ch = getch(); 
			if(ch == ENTER)	break;	
		} 
	}
	
}

void setting() {
	menu.showSetting(&snake, &snake2);
	while(1) {
		if(kbhit()) {
			ch = getch(); 
			if(ch == UP)	menu.pointUp();
			if(ch == DOWN)	menu.pointDown(2);
			if(ch == ENTER) {
				if(menu.modeReturn() == 0 || menu.modeReturn() == 1) {
					menu.modeSwitch(&snake, &snake2);
				}
				else {
					gamemap.gb(40,16);
					printf("清除成功！"); 
					gamemap.r1 = 0;
					gamemap.r2 = 0;
					gamemap.r3 = 0;
				}
			}
			if(ch == ESC) {
				break;
			}
		}
	}
}

void menuChose() {
	while(1) {
		HideCursor();
		if(kbhit()){
				ch = getch(); 
				if(ch == UP)	menu.pointUp();
				if(ch == DOWN)	menu.pointDown(3);
				if(ch == ENTER) {
					if(menu.modeReturn() == 0) {
						mciSendString("close bkmusic", 0, 0, 0);
						runSp();
						flashRecord();
						menu.init();	
					}
					if(menu.modeReturn() == 1) {
						mciSendString("close bkmusic", 0, 0, 0);
						runTp();
						menu.init();
					}
					if(menu.modeReturn() == 2) {
						mciSendString("close bkmusic", 0, 0, 0);
						setting();
						menu.init();
					}
					if(menu.modeReturn() == 3) {
						system("cls");
						freopen("Record.txt", "w", stdout);
						printf("%d %d %d",gamemap.r1,gamemap.r2,gamemap.r3);
						break;
					}
				}	
		} 
	}
		
}

int main() {

	mciSendString("open .\\music\\gg.mp3 alias gg", NULL, 0, NULL);
	mciSendString("open .\\music\\bk.mp3 alias bk", NULL, 0, NULL);
	mciSendString("open .\\music\\eat.mp3 alias eat", NULL, 0, NULL);
	HideCursor();
	menu.init();
	menuChose();
	
    return 0;
}

