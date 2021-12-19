#include <iostream>
using namespace std;
class A
{
	public:
		A()
		{
			a=0;
			b=0;
		}
		A(int i)
		{
			a=i;
			b=0;
		}
		A(int i,int j)
		{
			a=i;
			b=j;
		}
		void display()
		{
			cout<<"a="<<a<<"b="<<b;
		}
	private:
		int a;
		int b;
};
class B:public A
{
	public:
		B()
		{
			c=0;
		}
		B(int i):A(i)//����A��int i�� 
		{
			c=0;
		}
		B(int i,int j):A(i,j)//����A��int i��int j��
		{
			c=0;
		}
		B(int i,int j,int k):A(i,j)//����A��int i��int j��
		{
			c=k;
		}
		void display1()
		{
			cout<<"c="<<c<<endl;
		}
	private:
		int c;
};
int main()
{
	B b1,b2(1),b3(1,3),b4(1,3,5);
	b1.display1();
	b2.display1();
	b3.display1();
	b4.display1();
	return 0;
} 
