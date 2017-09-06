#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

void main(){
	initgraph(640, 640);
	setorigin(20,20);
	//setbkcolor(0xFFFFFF);
	setlinecolor(0xFFFFFF);
	for (int i = 1; i <= 25; i ++)
	{
		line(i*20, 0, i*20, 520);
		line(0, i * 20, 520, i * 20);
	}
	
	
	for (int i = 4; i < 25;i+=9){
		for (int j = 4; j < 25; j += 9){
			setfillcolor(GREEN);
			fillcircle(i * 20, j * 20, 6);
		}
	}
	setlinecolor(0x55FFFF);
	setlinestyle(PS_SOLID, 4);
	rectangle(0,0,520,520);
	system("pause");
	closegraph();
	
}

