#include "Snake.h"
#include <iostream>
#include "SimpleDraw.h"
#include "Ball.h"
Snake::Snake(void)
{
	size=1;
	b=new Ball [size];
}
void Snake::addBall(int x,int y)
{
	b[size-1].setx(x);
	b[size-1].sety(y);
	usePen(PS_SOLID,2,RGB(0,0,0));
	drawCircle(b[size-1].getx(),b[size-1].gety(),10);
	size++;
	Ball *temp = new Ball [size];
	for(int i=0;i<size-1;i++)
		temp[i]=b[i];
	delete [] b;
	b=temp;

}
void Snake::moveSnake(int x,int y)
{
	static int keepx,keepy;
	for(int i=size-1;i>=0;i--)
	{
		b[i].setx(b[i-1].getx());
		b[i].sety(b[i-1].gety());
	}
	b[0].setx(x);
	b[0].sety(y);
	for(int i=0;i<size;i++)
	{
		usePen(PS_SOLID,2,RGB(0,0,0));
		drawCircle(b[i].getx(),b[i].gety(),10);
	}
	usePen(PS_SOLID,2,RGB(255,255,255));
	drawCircle(b[size-1].getx(),b[size-1].gety(),10);
}
int Snake::checkSnake(int x,int y)
{
	int flag=1;
	for(int i=0;i<size;i++)
	{
		if (b[i].getx()==x && b[i].gety()==y)
			flag=0;
	}
	if(flag==1)
		return 1;
	else
		return 0;
}
	