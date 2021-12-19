#ifndef CIRCLE_H
#define CIRCLE_H
#include "point.h"
using namespace std;
class circle:public point
{
	protected:
		int row;
	public:
		circle(int x,int y,int r):point(x,y)
		{
			row=r;
		}
};
#endif
