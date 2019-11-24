#include <iostream.h>
#include <conio.h>
#include <graphics.h>
void main()
{
	int gd=DETECT,gm;
	int x=320,y=240,radius;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	for(radius=0;radius<=400;radius=radius+5)
	{
		circle(x,y,radius);
		getch();
	}
	getch();
	closegraph();
}
