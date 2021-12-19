#include<iostream>
#include<algorithm>
using namespace std;
struct cow 
{
	int minn,maxx;
};
struct lotion
{
	int pro,num;
};
bool cmp1(cow a,cow b) 
{ 
	return a.maxx<b.maxx; 
}
bool cmp2(lotion a,lotion b) 
{
	return a.pro<b.pro;
}
int main() 
{
	int n, m;
	cin>>n>>m;
	struct cow cow[2510];
	struct lotion lotion[2510];
	for(int i=0;i<n;i++) 
	{
		cin>>cow[i].minn>>cow[i].maxx;
	}
	for(int i=0;i<m;i++) 
	{
		cin>>lotion[i].pro>>lotion[i].num;
	}
	sort(cow,cow+n,cmp1);
	sort(lotion,lotion+m,cmp2);
	int num=0;
	for(int i=0;i<n;i++) 
	{
		for(int j=0;j<m;j++)
		{
			if(lotion[j].pro>=cow[i].minn&&lotion[j].pro<=cow[i].maxx&&lotion[j].num>0) 
			{
				num++; 
				lotion[j].num--;
				break;
			}
		}
	}
	cout<<num;
	return 0;
}
