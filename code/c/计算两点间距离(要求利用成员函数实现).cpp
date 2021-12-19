#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
class point
{
	public:
		void scan(double a,double b,double c,double d);
		void display();
	private:
		double x1,y1,x2,y2;
};
void point::scan(double a,double b,double c,double d)
{
	x1=a;
	y1=b;
	x2=c;
	y2=d;
}
void point::display()
{
	printf("%.2lf",sqrt((x2-x1)*(x2-x1)+(y2-y1)*y2-y1));
}
int main()
{
	point a1;
	a1.scan(0,0,3,4);
	a1.display();
	return 0;
}
