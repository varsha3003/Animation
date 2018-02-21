#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm," ");
	arc(200,200,0,360,150);
	arc(100,150,0,360,20);
	arc(300,150,0,360,20);
	arc(200,200,0,360,10);
	arc(200,300,180,360,30);
	getch();
	closegraph();
}