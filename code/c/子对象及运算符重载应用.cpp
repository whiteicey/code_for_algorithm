#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class crectangle
{
	private:
		double leftx,lefty,a,b;
	public:
		friend istream & operator>>(istream & in, crectangle & m);
		friend ostream & operator<<(ostream & out,crectangle & m);
		double lenghth();
		double area();
		void display();
		double distance();
		crectangle()
		{
			leftx=20;
			lefty=15;
			a=100;
			b=60;
		}
};
istream & operator>>(istream & in, crectangle&m)
{
	in>>m.leftx>>m.lefty>>m.a>>m.b;
	return in;
}
double crectangle::lenghth()
{
	return 2*a+2*b;
}
double crectangle::area()
{
	return a*b;
}
double crectangle::distance()
{
	double midx,midy;
	midx=(this->leftx+this->leftx+this->a)/2;
	midy=(this->lefty+this->lefty+this->b)/2;
	return sqrt(midx*midx+midy*midy);
}
ostream & operator <<(ostream & out,crectangle & m)
{
	out<<m.area()<<endl;
	out<<m.lenghth()<<endl;
	out<<m.distance()<<endl;
	return out;
}
void crectangle::display()
{
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<this->leftx<<" "<<this->lefty<<" "<<"a="<<this->a<<" "<<"b="<<this->b<<endl;
}
int main()
{
	crectangle a1;
	a1.display();
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<a1.lenghth()<<endl;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<a1.area()<<endl;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<a1.distance()<<endl;
	return 0; 
}
