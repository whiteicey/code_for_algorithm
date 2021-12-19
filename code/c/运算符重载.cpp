#include <iostream>
using namespace std;
class Complex
{
	public:
		Complex()
		{
			real=0;
			image=0;
		}
		//Complex(double r,double i):real(r),imag(i){};
		Compelx(double r,double i)
		{
			real=r;
			image=i;
		}
		friend Complex operator +(const Complex &a,const Complex &b);
		void print();
	public:
		double real;
		double image;
};
Complex operator + (const Complex &a,const Complex &b)
{
	Complex c;
	c.image=a.image+b.image;
	c.real=a.real+b.real;
	return c;
}
void Complex::print()
{
	cout<<"("<<this->real<<","<<this->image<<"i)"<<endl;
}
int main()
{
	Complex c1,c2,c3;
	cin>>c1.real>>c1.image;
	cin>>c2.real>>c2.image;
	c3=c1+c2;
	c3.print();
	return 0;
}
