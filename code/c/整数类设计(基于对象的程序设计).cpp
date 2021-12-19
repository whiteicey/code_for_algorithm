#include <iostream>
#include <algorithm>
using namespace std;

class num
{
	public:
		int a,b,c;
	public:
		void scan();
		void max();
		void ave();
		void line();
		void print(int x);
		void print(int* y);
};
void num::scan()
{
	cin>>this->a>>this->b>>this->c;
}
void num::ave()
{
	print((this->a+this->b+this->c)/3);
	//cout<<<<endl; 
}
void num::max()
{
	if(this->a>this->b&&this->a>this->c)
	{
		print(this->a);
	}
	if(this->b>this->a&&this->b>this->c)
	{
		print(this->b);
	}
	if(this->c>this->b&&this->c>this->a)
	{
		print(this->c);
	}
}
void num::line()
{
	int a[3];
	a[0]=this->a;
	a[1]=this->b;
	a[2]=this->c;
	sort(a,a+3);
	print(a);
}
void num::print(int x)
{
	cout<<x<<endl;
}
void num::print(int* y)
{
	int i;
	for(i=0;i<3;i++)
	{
		cout<<y[i]<<" ";
	}
}
int main()
{
	num n1;
	n1.scan();
	n1.max();
	n1.ave();
	n1.line();	
	return 0;
}
