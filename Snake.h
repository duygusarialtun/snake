#pragma once
#include "Ball.h"
class Snake
{
	Ball *b;
	int size;
public:
	Snake(void);
	void addBall(int x,int y);
	void moveSnake(int x,int y);
	int checkSnake(int x,int y);
};

