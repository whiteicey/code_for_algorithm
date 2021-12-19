#include <iostream>
using namespace std;
int main()
{
	int h1,h2,m1,m2;
	while(1)
	{
		int sum=0;
		cin>>h1>>m1>>h2>>m2;
		if(h1==0&&m1==0&&h2==0&&m2==0)
		{
			break;
		}
		else
		{
			if(m2-m1<0)
			{
				h2-=1;
				m2+=60;
				sum=m2-m1+(h2-h1)*60;
			}
			else
			{
				sum=m2-m1+(h2-h1)*60;
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}
