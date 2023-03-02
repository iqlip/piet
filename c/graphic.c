#include<stdlib.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd = DETECT, gm, color;
    initgraph(&gd, &gm, "");
    circle(100, 100, 50);
  
    // setcolor function
    setcolor(GREEN);
    circle(200,200,50);
    getch();
    closegraph();
    return 0;

	}
  
