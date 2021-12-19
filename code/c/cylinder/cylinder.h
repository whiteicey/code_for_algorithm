#ifndef CYLINDER_H
#define CYLINDER_H
#include "circle.h"
#include <iostream>
using namespace std;
class cylinder:public circle
{
	private:
		int height;
		int x,y,row;
	public:
		cylinder(int xx,int yy,int r,int h):circle(x,y,r)
		{
			height=h;
		}
		int volumn()
		{
			return 3*row*row*height;
		}
};
#endif
