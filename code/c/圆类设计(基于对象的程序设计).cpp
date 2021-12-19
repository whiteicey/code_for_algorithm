#include <iostream>
#define P 3.14
using namespace std;
class circle
{
	public:
		double r;
		void length();
		void area();
		void set();
		void show(double x);
};
void circle::set()
{
	cin>>this->r;
}
void circle::length()
{
	show(P*2*r);
}
void circle::area()
{
	show(P*r*r);
}
void circle::show(double x)
{
	cout<<x<<" ";
}
int main()
{
	circle c1;
	c1.set();
	c1.length();
	c1.area();
	return 0;
}
