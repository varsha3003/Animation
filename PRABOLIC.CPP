#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
void boundary_fill(int x,int y,int c1,int c2)
{
	int p;
	p = getpixel(x,y);
	if(p ==c2)
	{
		putpixel(x,y,c1);
		boundary_fill(x+1,y,c1,c2);
		boundary_fill(x-1,y,c1,c2);
		boundary_fill(x,y+1,c1,c2);
		boundary_fill(x,y-1,c1,c2);

	}
}
void bazier(int x0,int y0,int x1,int y1,int x2,int y2,int x3,int y3,int d,int c)
{
	float u;
	int x,y;
	for(u=0;u<=1;u+=0.01)
	{
			 cleardevice();
		x=(1-u)*(1-u)*(1-u)*x0+3*(1-u)*(1-u)*u*x1+3*(1-u)*u*u*x2+u*u*u*x3;
		y=(1-u)*(1-u)*(1-u)*y0+3*(1-u)*(1-u)*u*y1+3*(1-u)*u*u*y2+u*u*u*y3;
		putpixel(x,y,WHITE);

	       circle(x,y,30);
	       boundary_fill(x,y,c,BLACK);
	       delay(d);

	}

}
void main()
{



	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
      //	clrscr();
	circle(50,50,50);
	putpixel(50,50,RED);
	putpixel(90,100,RED);
	putpixel(110,250,RED);
	putpixel(150,460,RED);
	bazier(50,50,90,100,110,250,150,460,50,WHITE);
//	delay(50);
	putpixel(150,460,RED);
	putpixel(190,300,RED);
	putpixel(260,300,RED);
	putpixel(300,460,RED);
	bazier(150,460,190,300,260,300,300,460,30,YELLOW);
	putpixel(300,460,RED);
	putpixel(330,360,RED);
	putpixel(370,360,RED);
	putpixel(400,460,RED);
	bazier(300,460,330,360,370,360,400,460,20,RED);

	getch();
	closegraph();

}
