#include <iostream>
#include <cstdio>
using namespace std;
class cuboid
{
	private:
		double length;
		double width;
		double height;
	public:
		cuboid()
		{
			length=0;
			width=0;
			height=0;
		}
		cuboid(double l,double w,double h):length(l),width(w),height(h){};
		double volumn();
		void scan(double l,double w,double h);
		~cuboid();
};
double cuboid::volumn()
{
	printf("%.3lf ",length*width*height);
}
void cuboid::scan(double l,double w,double h)
{
	length=l;
	width=w;
	height=h;
}
cuboid::~cuboid(void)
{
	
}
int main()
{
	cuboid a1,a2,a3;
	a1.scan(10.2,3.1,5.6);
	a1.volumn();
	a2.scan(11.21,9.22,13.5);
	a2.volumn();
	a3.scan(5.1,3.4,6.5);
	a3.volumn();
	return 0;
}
