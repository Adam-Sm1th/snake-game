#ifndef Demo_menu_H
#define Demo_menu_H
#include "Snake.h"
class Menu {
	public:
		int pointX;
		int pointY;
		int backUpX;
		int backUpY;
		int mode;
		Menu(int pointX, int pointY):pointX(pointX),pointY(pointY) {
			mode = 0;
			backUpX = pointX;
			backUpY = pointY;
		}
		
		void delay(int time);
		void gb(int x, int y);
		void init();
		void modeSwitch(Snake *snake, Snake *snake2);
		void pointInit();
		void pointUp();
		void pointDown(int a);
		void showSetting(Snake *snake, Snake *snake2);
		int modeReturn();
		
};

#endif
