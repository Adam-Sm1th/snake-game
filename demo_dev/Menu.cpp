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
	printf("  ������������  �������{    ��  �{�{�{       ���� �{�� ������������     ����   ���� ������������  �������{    ��  ��������������  ������ �{�{�{      \n");
	block;
	printf(" ����       ����  ��   ��  ���������{     �����{��  ����           �� ��   ����      ����  ��   ��       �{  ������  ���������{    \n");
	block;
	printf("  �������{   ������   �� ����  ����   ���{  ���������{   ������          ��     ������   ������   �� ����     �{     ����  ����   ���{  \n");
	block;
	printf("      ���� ������    ������ �����{�{�{�{���� ������ ���{  ����  �{       �� ��    ����  �{ ������    ������   �{       ����  �����{�{�{�{���� \n");
	block;
	printf(" ������������   ����    ������  ����   ������  ����  ���{  ��������     ����   ����   ��������  ����    ������  ��������������  ����  ����   ������?\n");
	block;
	printf("   ��                      �� ��      ��                 ��                        ��     ��        �� �� \n");
	cout<<endl<<endl<<endl;
	

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	delay(20000);
	block2;
	printf("�X�T�[���Щ��������Щ������Щ�  ���Щ��� �Щ�����  ���������������Щ�������  ������������\n");
	block2;
	printf("�^�T�[ �� �����ȩ��Щ� ��    �� �����ȩ���   �� �Щ����ȩ���������   ������������\n");
	block2;
	printf("�^�T�a �� �� �ةة��� ��    �� �� �ة�����  �������� �ة� �ة�����  ��������  \n");
	
	delay(20000);
	block2;
	printf("�X�T�[���Щ��������Щ������Щ�  ���Щ��� �Щ�����  ���������������Щ�������  ���Щ�������\n");
	block2;
	printf("�^�T�[ �� �����ȩ��Щ� ��    �� �����ȩ���   �� �Щ����ȩ���������    �� ������\n");
	block2;
	printf("�^�T�a �� �� �ةة��� ��    �� �� �ة�����  �������� �ة� �ة�����   �� ��  \n");
	
	delay(20000);
	block3;
	printf("���������������Щ�������  �X�T�[���������Щ����Щ��Щ�����������\n");
	block3;
	printf("�� �Щ����ȩ���������   �^�T�[����  ��  �� ���������� ��\n");
	block3;
	printf("�������� �ة� �ة�����  �^�T�a������ ��  �� �ة�����������\n");
	
	delay(20000);
	block4;
	printf("�X�T�[ �� �ЩЩ��Щ�  ���������������Щ�������\n");
	block4;
	printf("�U�T�p�[�� ���� ��   �� �Щ����ȩ��������� \n");
	block4;
	printf("�^�T�a�^�������� ��   �������� �ة� �ة�����\n");
	
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
	printf("��");
	
}

void Menu::showSetting(Snake *snake, Snake *snake2) {
	system("cls");
	pointInit();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	block2;
	printf("���������������[���������������[�����������������[�����������������[�����[�������[   �����[ �������������[ \n");
	block2;
	printf("�����X�T�T�T�T�a�����X�T�T�T�T�a�^�T�T�����X�T�T�a�^�T�T�����X�T�T�a�����U���������[  �����U�����X�T�T�T�T�a \n");
	block2;
	printf("���������������[�����������[     �����U      �����U   �����U�����X�����[ �����U�����U  �������[\n");
	block2;
	printf("�^�T�T�T�T�����U�����X�T�T�a     �����U      �����U   �����U�����U�^�����[�����U�����U   �����U\n");
	block2;
	printf("���������������U���������������[   �����U      �����U   �����U�����U �^���������U�^�������������X�a\n");
	block2;
	printf("�^�T�T�T�T�T�T�a�^�T�T�T�T�T�T�a   �^�T�a      �^�T�a   �^�T�a�^�T�a  �^�T�T�T�a �^�T�T�T�T�T�a \n");
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
	printf("��");
	
	gb(40,13);
	if(snake->swMode == true) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	} else {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	printf("��");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	gb(pointX, pointY); 
	printf("��");
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
			printf("��");
			snake->selfDamage = true;
			snake2->selfDamage = true; 
		} else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			printf("��");
			snake->selfDamage = false;
			snake2->selfDamage = false;
		}
	} else if(mode == 1) {
		gb(40,13);
		if(snake->swMode == 1) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			printf("��");
			snake->swMode = 0; 
			snake2->swMode = 0;
		} else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			printf("��");
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
		printf("��");
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
		printf("��");
	}
}
