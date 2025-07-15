#include "Menu.h"
#include "windows.h"
#include <conio.h>
#include <bits/stdc++.h>
#define block printf("          ");	delay(2500)
#define block2	printf("                                 ");
#define block3	printf("                                        ");
#define block4	printf("                                            ");
#define block5	printf("                                                "); delay(2000)
using namespace std;

void Menu::delay(int time) {
	for(int i = 1 ;i <= 100 ;i++)
		for(int j = 1;j <= 100 ;j++)
			for(int k = 1;k <= time ;k++){		
			}
}

void Menu::init() {
	mciSendString("open .\\music\\mus.wav alias bkmusic", NULL, 0, NULL);
	mciSendString("play bkmusic", 0, 0, 0);
	system("cls");
	pointInit();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	block;
	printf("  ¨€¨€¨€¨€¨€¨€  ¨€¨€¨€¨{    ¨€  ¨{¨{¨{       ¨€¨€ ¨{¨€ ¨ˆ¨€¨€¨€¨€¨€     ¨€¨€   ¨€¨€ ¨ˆ¨€¨€¨€¨€¨€  ¨€¨€¨€¨{    ¨€  ¨€¨€¨€¨€¨€¨€¨€  ¨€¨€¨ˆ ¨{¨{¨{      \n");
	block;
	printf(" ¨€¨€       ¨€¨€  ¨€   ¨€  ¨€¨€¨€¨€¨{     ¨€¨€¨{¨€  ¨ˆ¨€           ¨€ ¨€   ¨ˆ¨€      ¨€¨€  ¨€   ¨€       ¨{  ¨ˆ¨€¨€  ¨€¨€¨€¨€¨{    \n");
	block;
	printf("  ¨ˆ¨€¨€¨{   ¨ˆ¨€¨€   ¨€ ¨€¨€  ¨€¨€   ¨€¨{  ¨ˆ¨€¨€¨€¨{   ¨€¨€¨€          ¨€     ¨€¨€¨€   ¨ˆ¨€¨€   ¨€ ¨€¨€     ¨{     ¨€¨€  ¨€¨€   ¨€¨{  \n");
	block;
	printf("      ¨€¨€ ¨ˆ¨€¨€    ¨„¨€¨€ ¨€¨€¨{¨{¨{¨{¨€¨€ ¨ˆ¨€¨€ ¨€¨{  ¨ˆ¨€  ¨{       ¨€ ¨€    ¨ˆ¨€  ¨{ ¨ˆ¨€¨€    ¨„¨€¨€   ¨{       ¨€¨€  ¨€¨€¨{¨{¨{¨{¨€¨€ \n");
	block;
	printf(" ¨€¨€¨€¨€¨€¨€   ¨€¨€    ¨ˆ¨€¨€  ¨ˆ¨€   ¨ˆ¨€¨€  ¨€¨€  ¨€¨{  ¨€¨€¨€¨€     ¨€¨€   ¨€¨€   ¨€¨€¨€¨€  ¨€¨€    ¨ˆ¨€¨€  ¨€¨€¨€¨€¨€¨€¨€  ¨€¨€  ¨ˆ¨€   ¨ˆ¨€¨€?\n");
	block;
	printf("   ¨ˆ                      ¨ˆ ¨€      ¨ˆ                 ¨ˆ                        ¨ˆ     ¨ˆ        ¨ˆ ¨€ \n");
	cout<<endl<<endl<<endl;
	

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	delay(20000);
	block2;
	printf("¨X¨T¨[©°©Ð©´©°©¤©´©Ð©¤©´©°©Ð©´  ©°©Ð©´©Ð ©Ð©°©¤©´  ©°©¤©´©°©¤©´©°©Ð©´©°©¤©´  ©°©¤©´©°©¤©´\n");
	block2;
	printf("¨^¨T¨[ ©¦ ©À©¤©È©À©Ð©¼ ©¦    ©¦ ©À©¤©È©À©È   ©¦ ©Ð©À©¤©È©¦©¦©¦©À©È   ©¸©¤©´©À©¤©¼\n");
	block2;
	printf("¨^¨T¨a ©Ø ©Ø ©Ø©Ø©¸©¤ ©Ø    ©Ø ©Ø ©Ø©¸©¤©¼  ©¸©¤©¼©Ø ©Ø©Ø ©Ø©¸©¤©¼  ©¸©¤©¼©Ø  \n");
	
	delay(20000);
	block2;
	printf("¨X¨T¨[©°©Ð©´©°©¤©´©Ð©¤©´©°©Ð©´  ©°©Ð©´©Ð ©Ð©°©¤©´  ©°©¤©´©°©¤©´©°©Ð©´©°©¤©´  ©°©Ð©´©°©¤©´\n");
	block2;
	printf("¨^¨T¨[ ©¦ ©À©¤©È©À©Ð©¼ ©¦    ©¦ ©À©¤©È©À©È   ©¦ ©Ð©À©¤©È©¦©¦©¦©À©È    ©¦ ©À©¤©¼\n");
	block2;
	printf("¨^¨T¨a ©Ø ©Ø ©Ø©Ø©¸©¤ ©Ø    ©Ø ©Ø ©Ø©¸©¤©¼  ©¸©¤©¼©Ø ©Ø©Ø ©Ø©¸©¤©¼   ©Ø ©Ø  \n");
	
	delay(20000);
	block3;
	printf("©°©¤©´©°©¤©´©°©Ð©´©°©¤©´  ¨X¨T¨[©°©¤©´©°©Ð©´©°©Ð©´©Ð©°©´©°©°©¤©´\n");
	block3;
	printf("©¦ ©Ð©À©¤©È©¦©¦©¦©À©È   ¨^¨T¨[©À©È  ©¦  ©¦ ©¦©¦©¦©¦©¦ ©Ð\n");
	block3;
	printf("©¸©¤©¼©Ø ©Ø©Ø ©Ø©¸©¤©¼  ¨^¨T¨a©¸©¤©¼ ©Ø  ©Ø ©Ø©¼©¸©¼©¸©¤©¼\n");
	
	delay(20000);
	block4;
	printf("¨X¨T¨[ ©Ð ©Ð©Ð©°©Ð©´  ©°©¤©´©°©¤©´©°©Ð©´©°©¤©´\n");
	block4;
	printf("¨U¨T¨p¨[©¦ ©¦©¦ ©¦   ©¦ ©Ð©À©¤©È©¦©¦©¦©À©È \n");
	block4;
	printf("¨^¨T¨a¨^©¸©¤©¼©Ø ©Ø   ©¸©¤©¼©Ø ©Ø©Ø ©Ø©¸©¤©¼\n");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	cout<<endl<<endl<<endl;
	delay(20000);
	block5;
	printf("   __                             ______             __             \n");
	block5;
	printf("  /  )     /      /                 /               /  )            \n");
	block5;
	printf(" /   __ __/ _    /____  ,  ---   --/__.  ____  _,  /  / _  ____  _, \n");
	block5;
	printf("(__/(_)(_/_</_  /_)/ (_/_       (_/(_/|_/ / <_(_)_/__/_</_/ / <_(_)_\n");
	block5;
	printf("                      /                        /|                /| \n");
	block5;
	printf("                     '                       |/                |/  ");
	
	delay(20000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	
	gb(pointX, pointY); 
	printf("¡ñ");
	
}

void Menu::showSetting(Snake *snake, Snake *snake2) {
	system("cls");
	pointInit();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	block2;
	printf("¨€¨€¨€¨€¨€¨€¨€¨[¨€¨€¨€¨€¨€¨€¨€¨[¨€¨€¨€¨€¨€¨€¨€¨€¨[¨€¨€¨€¨€¨€¨€¨€¨€¨[¨€¨€¨[¨€¨€¨€¨[   ¨€¨€¨[ ¨€¨€¨€¨€¨€¨€¨[ \n");
	block2;
	printf("¨€¨€¨X¨T¨T¨T¨T¨a¨€¨€¨X¨T¨T¨T¨T¨a¨^¨T¨T¨€¨€¨X¨T¨T¨a¨^¨T¨T¨€¨€¨X¨T¨T¨a¨€¨€¨U¨€¨€¨€¨€¨[  ¨€¨€¨U¨€¨€¨X¨T¨T¨T¨T¨a \n");
	block2;
	printf("¨€¨€¨€¨€¨€¨€¨€¨[¨€¨€¨€¨€¨€¨[     ¨€¨€¨U      ¨€¨€¨U   ¨€¨€¨U¨€¨€¨X¨€¨€¨[ ¨€¨€¨U¨€¨€¨U  ¨€¨€¨€¨[\n");
	block2;
	printf("¨^¨T¨T¨T¨T¨€¨€¨U¨€¨€¨X¨T¨T¨a     ¨€¨€¨U      ¨€¨€¨U   ¨€¨€¨U¨€¨€¨U¨^¨€¨€¨[¨€¨€¨U¨€¨€¨U   ¨€¨€¨U\n");
	block2;
	printf("¨€¨€¨€¨€¨€¨€¨€¨U¨€¨€¨€¨€¨€¨€¨€¨[   ¨€¨€¨U      ¨€¨€¨U   ¨€¨€¨U¨€¨€¨U ¨^¨€¨€¨€¨€¨U¨^¨€¨€¨€¨€¨€¨€¨X¨a\n");
	block2;
	printf("¨^¨T¨T¨T¨T¨T¨T¨a¨^¨T¨T¨T¨T¨T¨T¨a   ¨^¨T¨a      ¨^¨T¨a   ¨^¨T¨a¨^¨T¨a  ¨^¨T¨T¨T¨a ¨^¨T¨T¨T¨T¨T¨a \n");
	cout<<endl<<endl<<endl;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	block5;
	printf(" +-+-+-+-+-+-+-+-+-+-+\n");
	block5;
	printf(" |S|e|l|f|D|a|m|a|g|e|\n");
	block5;
	printf(" +-+-+-+-+-+-+-+-+-+-+\n");
	

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	block5;
	printf(" +-+-+-+-+-+-+-+-+-+-+-+-+\n");
	block5;
	printf(" |i|m|p|a|c|t|D|a|m|a|g|e|\n");
	block5;
	printf(" +-+-+-+-+-+-+-+-+-+-+-+-+\n");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	block5;
	printf(" +-+-+-+-+-+-+-+-+-+-+-+-+\n");
	block5;
	printf(" |c|l|e|a|r| |r|e|c|o|r|d|\n");
	block5;
	printf(" +-+-+-+-+-+-+-+-+-+-+-+-+\n");
	
	gb(40,10);
	if(snake->selfDamage == true) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	} else {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	printf("¡ï");
	
	gb(40,13);
	if(snake->swMode == true) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	} else {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	printf("¡ï");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	gb(pointX, pointY); 
	printf("¡ñ");
}

void Menu::gb(int x, int y) {
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD w = {x, y};
	SetConsoleCursorPosition(hOut, w);
	CONSOLE_CURSOR_INFO cursorInfo = {1, FALSE};
}

int Menu::modeReturn() {
	return mode;
}

void Menu::pointInit() {
	pointX = backUpX;
	pointY = backUpY;
	mode = 0;
}

void Menu::modeSwitch(Snake *snake, Snake *snake2) {
	if(mode == 0) {
		gb(40,10);
		if(snake->selfDamage == false) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			printf("¡ï");
			snake->selfDamage = true;
			snake2->selfDamage = true; 
		} else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			printf("¡ï");
			snake->selfDamage = false;
			snake2->selfDamage = false;
		}
	} else if(mode == 1) {
		gb(40,13);
		if(snake->swMode == 1) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			printf("¡ï");
			snake->swMode = 0; 
			snake2->swMode = 0;
		} else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			printf("¡ï");
			snake->swMode = 1;
			snake2->swMode = 1;
		}
	}
}

void Menu::pointUp() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	if(mode > 0) {
		gb(pointX, pointY);
		printf("  ");
		mode--;
		pointY -= 3;
		gb(pointX, pointY);
		printf("¡ñ");
	}
}

void Menu::pointDown(int a) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	if(mode < a) {
		gb(pointX, pointY);
		printf("  ");
		mode++;
		pointY += 3;
		gb(pointX, pointY);
		printf("¡ñ");
	}
}
