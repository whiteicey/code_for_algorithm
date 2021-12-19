#include <iostream>
using namespace std;
class complex
{
	public:
		complex(double r,double i):real(r),imag(i){
		}
		operator double ()
		{
			return real;
		}
	private:
		double real,imag;
};
int main()
{
	complex c1(3,4);
	double d;
	d=2.5+c1;
	cout<<d; 
	return 0;	
}
