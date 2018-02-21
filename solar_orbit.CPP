#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<math.h>
void ellipse(int a,int b);
void main()
{
	long int a,b;
	float x,y,i;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	printf("Enter the x-radius and y-radius of ellipse:");
	scanf("%ld%ld",&a,&b);
	for(i=0;i<=6.28;i+=0.2)
	{       cleardevice();
		x=a*cos(i);
		y=b*sin(i);
		ellipse(a,b);
		circle(x+320,240-y,20);
		delay(100);
	}


	getch();
	closegraph();
}
void ellipse(int a,int b)
{
	int x,y;
	float p;
	line(320,0,320,480);
	line(0,240,640,240);
	x=0;
	y=b;
	p=b*b-a*a*b+(a*a)/4;
	while((2*b*b*x)<(2*a*a*y))
	{

		if(p<0)
		{
			x=x+1;
			p=p+2*b*b*x+b*b;
		}
		else
		{
			x=x+1;
			y=y-1;
			p=p+2*b*b*x-2*a*a*y+b*b;
		}
		putpixel(x+320,y+240,WHITE);
		putpixel(x+320,-y+240,WHITE);
		putpixel(-x+320,-y+240,WHITE);
		putpixel(-x+320,y+240,WHITE);

	}
	p=b*b*(x+0.5)*(x+0.5)+a*a*(y-1)*(y-1)-a*a*b*b;
	while(y>0)
	{
		if(p>0)
		{
			y=y-1;
			p=p-2*a*a*y+a*a;
		}
		else
		{
			x=x+1;
			y=y-1;
			p=p+2*b*b*x-2*a*a*y+a*a;
		}
		putpixel(x+320,y+240,WHITE);
		putpixel(x+320,-y+240,WHITE);
		putpixel(-x+320,-y+240,WHITE);
		putpixel(-x+320,y+240,WHITE);

	}
}