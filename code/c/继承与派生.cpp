#include <iostream>
using namespace std;
class a
{
	public:
	a()
	{
		cout<<"construction A"<<endl;
	}
	~a()
	{
		cout<<"destruction A"<<endl;
	}
};
class b:public a
{
	public:
	b()
	{
		cout<<"construction B"<<endl;
	}
	~b()
	{
		cout<<"destruction B"<<endl;
	}		
};
class c:public b
{
	public:
	c()
	{
		cout<<"construction C"<<endl;
	}
	~c()
	{
		cout<<"destruction C"<<endl;
	}		
};
int main()
{
	c c1;
	return 0;
 } 
