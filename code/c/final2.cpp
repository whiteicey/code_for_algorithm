#include <iostream>
using namespace std;
class Container
{
	public:
		void virtual area()=0;
		void virtual volumn()=0;
		double radius;
};
class cylinder:public Container
{
	public:
		cylinder(double r,double h)
		{
			radius=r;
			high=h;
		}
		void area()
		{
			cout<<3.14*radius*radius*2+2*radius*3.14*high<<endl;
		}
		void volumn()
		{
			cout<<3.14*2*radius*high<<endl;
		}
	private:
		double radius;
		double high;
};
class cube:public Container
{
	public:
		cube(double r)
		{
			radius=r;
		}
		void area()
		{
			cout<<radius*radius*6<<endl;
		}
		void volumn()
		{
			cout<<(radius*radius*radius)<<endl;
		}
	private:
		double radius;
};
void calculate(Container& s)
{
	s.area();
	s.volumn();
}
int main()
{
	cylinder a(5,8);
	cube b(10);
	calculate(a);
	calculate(b);
	return 0;
}
