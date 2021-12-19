#include <iostream>
using namespace std;
class A
{
	public:
		A(int aa):a(aa)
		{
			cout<<a<<endl;
		}
		~A()
		{
			cout<<a*(-1)<<endl;
		}
		int a;
};
int main()
{
	A a1(1);
	A *p=new A(2);
	delete p;
	{
		A a3(3);
	}
	A a4[2]={4,5};
	return 0;
}
