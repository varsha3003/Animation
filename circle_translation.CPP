#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int x=0,y,p,r,i;
	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");
	line(0,240,640,240);
	line(320,0,320,480);
	//putpixel(320,240,WHITE);
	printf("Enter the radius of the circle:");
	scanf("%d",&r);
	for(i=0;i<=600;i=i+20)

	{
	cleardevice();
	y=r;
	x=0;
	p=1-r;
	putpixel(x+320,y+240,WHITE);
	putpixel(-x+320,y+240,WHITE);
	putpixel(x+320,-y+240,WHITE);
	putpixel(-x+320,-y+240,WHITE);
	while(x<=y)
	{
		if(p<0)
		{
			x=x+1;
			p=p+2*x+1;
		}
		else
		{
			x=x+1;
			y=y-1;
			p=p+2*x-2*y+1;
		}
		putpixel(x+i,y+240,WHITE);
		putpixel(-x+i,y+240,WHITE);
		putpixel(x+i,-y+240,WHITE);
		putpixel(-x+i,-y+240,WHITE);
		putpixel(y+i,x+240,WHITE);
		putpixel(-y+i,x+240,WHITE);
		putpixel(y+i,-x+240,WHITE);
		putpixel(-y+i,-x+240,WHITE);

	}
	delay(100);
	}
	getch();
	closegraph();

}