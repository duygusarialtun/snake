#include <iostream>
#include "SimpleDraw.h"
#include "Ball.h"
#include "Snake.h"
#include <string>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
	Ball b(100);
	Snake s;
	int x=100,y=100,flag=0,check=1;
	setWindowSize(600, 600);
	drawSquare(300, 300, 450);
	usePen(PS_SOLID,2,RGB(255,0,0));
	drawCircle(b.getx(),b.gety(),b.getr());
	char ch='f';
	while(b.getx()!=520 && b.gety()!=520 && b.getx()!=80 && b.gety()!=80 && check==1)
	{
		if(_kbhit())
			ch=_getch();
		if(ch=='d')
		{
			usePen(PS_SOLID,2,RGB(255,0,0));
			drawCircle(b.getx(),b.gety(),b.getr());
			Sleep(b.getspeed());
			usePen(PS_SOLID,2,RGB(255,255,255));
			drawCircle(b.getx(),b.gety(),b.getr());
			if(flag==1)
			{
				flag=0;
				s.addBall(b.getx(),b.gety());
			}
			b.setx(b.getx()+20);
			check=s.checkSnake(b.getx(),b.gety());
			s.moveSnake(b.getx(),b.gety());
		}
		if(ch=='s')
		{
			usePen(PS_SOLID,2,RGB(255,0,0));
			drawCircle(b.getx(),b.gety(),b.getr());
			Sleep(b.getspeed());
			usePen(PS_SOLID,2,RGB(255,255,255));
			drawCircle(b.getx(),b.gety(),b.getr());
			if(flag==1)
			{
				flag=0;
				s.addBall(b.getx(),b.gety());
			}
			b.sety(b.gety()+20);
			check=s.checkSnake(b.getx(),b.gety());
			s.moveSnake(b.getx(),b.gety());
		}

		if(ch=='w' )
		{
			usePen(PS_SOLID,2,RGB(255,0,0));
			drawCircle(b.getx(),b.gety(),b.getr());
			Sleep(b.getspeed());
			usePen(PS_SOLID,2,RGB(255,255,255));
			drawCircle(b.getx(),b.gety(),b.getr());
			if(flag==1)
			{
				flag=0;
				s.addBall(b.getx(),b.gety());
			}
			b.sety(b.gety()-20);
			check=s.checkSnake(b.getx(),b.gety());
			s.moveSnake(b.getx(),b.gety());
		}
		if(ch=='a')
		{
			usePen(PS_SOLID,2,RGB(255,0,0));
			drawCircle(b.getx(),b.gety(),b.getr());
			Sleep(b.getspeed());
			usePen(PS_SOLID,2,RGB(255,255,255));
			drawCircle(b.getx(),b.gety(),b.getr());
			if(flag==1)
			{
				flag=0;
				s.addBall(b.getx(),b.gety());
			}
			b.setx(b.getx()-20);
			check=s.checkSnake(b.getx(),b.gety());
			s.moveSnake(b.getx(),b.gety());
		}
		while(b.getx()+10>=x && b.getx()-10<=x && b.gety()+10>=y && b.gety()-10<=y)
		{
			usePen(PS_SOLID,2,RGB(255,255,255));
			drawCircle(x,y,5);
			x = rand() % 375 + 125;
			y =	rand() % 375 + 125;
			usePen(PS_SOLID,2,RGB(40,60,200));
			drawCircle(x,y,5);
			flag=1;
		}
	}
	usePen(PS_SOLID,2,RGB(255,0,0));
	drawCircle(b.getx(),b.gety(),b.getr());
	drawText(250, 50, "Game Over!");
	getchar();
	getchar();
}
