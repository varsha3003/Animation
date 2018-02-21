#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm," ");
	bar(200,200,400,400);
	bar(200,400,600,450);
	bar(100,400,200,450);
	arc(200,470,0,360,20);
	arc(400,470,0,360,20);
	getch();
	closegraph();
}