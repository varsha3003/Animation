#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void boundary_fill(int x,int y,int c1,int c2)
{
	int p;
	p = getpixel(x,y);
	if(p !=c2 && p!=c1)
	{
		putpixel(x,y,c1);
		boundary_fill(x+1,y,c1,c2);
		boundary_fill(x-1,y,c1,c2);
		boundary_fill(x,y+1,c1,c2);
		boundary_fill(x,y-1,c1,c2);

	}
}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");
	circle(100,100,20);
	setcolor(RED);
	boundary_fill(105,100,GREEN,RED);
	circle(100,100,40);
	setcolor(BLUE);
	boundary_fill(125,100,YELLOW,BLUE);
	getch();
	closegraph();
}
