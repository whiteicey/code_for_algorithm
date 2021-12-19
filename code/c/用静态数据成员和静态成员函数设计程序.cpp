#include <iostream>
#include <cstdio>
using namespace std;
static double discount;
class market
{
	public:
		void scan(int i,int n);
		void display();
		static int price;
		int num;
		int id;	
};
int market::price=30; 
void market::scan(int i,int n)
{
	id=i;
	num=n;
}
void market::display()
{
	cout<<discount*price*num<<endl;
}
int main()
{
	market m[3],*p;
	cin>>discount;
	discount=1-(discount*1.0/100);
	m[0].scan(1001,5);
	m[1].scan(1002,20);
	m[2].scan(1003,75);
	int number=0,sum=0,ave;
	for(p=m;p<m+3;p++)
	{
		number+=p->num;
	}
	printf("%.2lf %.2lf",number*p->price*discount,p->price*discount);
	return 0;
}
