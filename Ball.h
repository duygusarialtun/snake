#pragma once
class Ball
{
	int x,y,r,speed;
public:
	Ball(void);
	Ball(int);
	int getx ();
	int gety ();
	int getr ();
	int getspeed ();
	void setspeed (int s);
	void setx (int a);
	void sety (int b);

};
