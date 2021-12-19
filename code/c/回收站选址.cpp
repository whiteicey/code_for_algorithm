#include <iostream>
using namespace std;
struct map
{
	long long x,y;
}m[1010];
int c[5];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		m[i].x=x;
		m[i].y=y;
	}
	for(int i=0;i<n;i++)
	{
		int count = 0;
		int sum =0;
		for(int j=0;j<n;j++)
		{
			if((m[i].x-1 == m[j].x && m[i].y == m[j].y)||(m[i].x+1 == m[j].x && m[i].y == m[j].y)||(m[i].x == m[j].x && m[i].y-1 == m[j].y)||(m[i].x == m[j].x && m[i].y+1 == m[j].y))
			{
				count ++;
			}
			if((m[i].x-1 == m[j].x && m[i].y-1 == m[j].y)||(m[i].x+1 == m[j].x && m[i].y+1 == m[j].y)||(m[i].x-1 == m[j].x && m[i].y+1 == m[j].y)||(m[i].x+1 == m[j].x && m[i].y-1 == m[j].y))
			{
				sum ++;
			}
		}
		if(count == 4)
		{
			c[sum]++;
		}
	}
	for(int i = 0;i <= 4;i++)
	{
		cout<<c[i]<<endl;
	}
	return 0;
}
