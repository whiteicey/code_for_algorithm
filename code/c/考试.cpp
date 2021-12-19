#include <iostream>
#include <cmath>
using namespace std;
class Point
{
	public:
		Point(double a = 0, double b = 0) :x(a), y(b){}
	private:
		double x;
		double y;
		friend double Distance(Point& first, Point& second);
};
double Distance(Point& first, Point& second)
{
	return sqrt((first.x - second.x)*(first.x - second.x) + (first.y - second.y)*(first.y - second.y));
}
class Triangle:public Point
{
	private:
		double ax,ay,bx,by,cx,cy;
	public:
		Triangle(double axx,double ayy,double bxx,double byy,double cxx,double cyy)
		{
			ax=axx;
			ay=ayy;
			bx=bxx;
			by=byy;
			cx=cxx;
			cy=cyy;
		}
		void judge()
		{
			double a,b,c;
			a=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
			b=sqrt((cx-bx)*(cx-bx)+(cy-by)*(cy-by));
			c=sqrt((cx-ax)*(cx-ax)+(cy-ay)*(cy-ay));
			if((a+b>c)&&(a+c>b)&&(b+c>a))
			{
				cout<<"yes"<<endl; 
			}
			else
			{
				cout<<"no"<<endl;
			}
		}
};
int main()
{
	Triangle t1(0,0,1,0,2,0);
	t1.judge();
	return 0;
}
