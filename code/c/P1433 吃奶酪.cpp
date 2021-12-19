#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
struct map
{
	double x,y;
};
bool cmp(map a,map b)
{
	if(a.x!=b.x)
	{
		return a.x<b.x;
	}
	else
	{
		return a.y<b.y;
	}
}
int main()
{
	int n,i;
	cin>>n;
	struct map map[n];
	for(i=0;i<n;i++)
	{
		cin>>map[i].x>>map[i].y;
	}
	sort(map,map+n,cmp);
	double tempx=0,tempy=0;
	double s=0;
	for(i=0;i<n;i++)
	{
		s+=sqrt((map[i].x-tempx)*(map[i].x-tempx)+(map[i].y-tempy)*(map[i].y-tempy));
		cout<<sqrt((map[i].x-tempx)*(map[i].x-tempx)+(map[i].y-tempy)*(map[i].y-tempy))<<endl;
		tempx=map[i].x;
		tempy=map[i].y;
	}
	printf("%.3lf",s);
	return 0;
}
