#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
class point
{
	public:
		double x,y;
	public:
		void scan(double m,double n);
		friend double display(point&p1,point&p2);
};
void point::scan(double m,double n)
{
	this->x=m;
	this->y=n;
}
double dispaly(point&p1,point&p2)
{
	return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}
int main()
{
	point p1,p2;
	p1.scan(0,0);
	p2.scan(3,4);
	printf("%.2lf",dispaly(p1,p2));
	return 0;
}
