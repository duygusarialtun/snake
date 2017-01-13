#include "Ball.h"
#include <iostream>
using namespace std;
Ball::Ball(void)
{
	x=y=0;
	r=10;
	speed=200;
}
Ball::Ball(int a)
{
	x=y=a;
	r=10;
	speed=200;
}
int Ball::getx ()
{
	return (x);
}
int Ball::gety ()
{
	return (y);
}int Ball::getr ()
{
	return (r);
}
int Ball::getspeed ()
{
	return (speed);
}
void Ball::setspeed (int s)
{
	speed=s;
}
void Ball::setx (int a)														
{
	x=a;
}
void Ball::sety(int a)
{
	y=a;
}
