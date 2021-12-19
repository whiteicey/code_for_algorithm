#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct gold
{
	double m;
	double v;
	double per;
};
bool cmp (gold a,gold b)
{
	return a.per>b.per;
 } 
int main()
{
	int n,t;
	int i;
	double sum=0;
	cin>>n>>t;
	struct gold gold1[100];
	for(i=0;i<n;i++)
	{
		cin>>gold1[i].m>>gold1[i].v;
		gold1[i].per=gold1[i].v/gold1[i].m;
	}
	sort(gold1,gold1+n,cmp);
	for(i=0;i<n;i++)
	{
		if(t<gold1[i].m)
		{
			sum+=(t*1.0)*gold1[i].per;
			break;
		}
		else
		{
			t-=gold1[i].m;
			sum+=gold1[i].v;
		}
	}
	printf("%.2lf",sum);
	return 0;
}
