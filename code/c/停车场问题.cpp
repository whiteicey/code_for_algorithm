//Dlove's template
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
using namespace std;
stack<int>park;
queue<int>road;
stack<int>temp1;
queue<int>temp2;
struct car
{
	int num;
	int begin;
	int end;
};
bool cmp(struct car a,struct car b)
{
	return a.end<b.end;
}
int main()
{
	int m;
	double n;
	int maxx=-1;
	cin>>m>>n;
	struct car c[100000];
	while(1)
	{
		int e,a,t;
		cin>>e>>a>>t;
		if(e==0&&a==0&&t==0)
		{
			break;
		}
		if(e==0)
		{
			if(a>maxx)
			{
				maxx=a;
			}
			c[a].begin=t;
			c[a].num=a;
			if(park.size()<m)
			{
				park.push(a);
			}
			else
			{
				road.push(a);
			}
		}
		else
		{		
			while(!park.empty())	
			{
				if(park.top()!=a)
				{
					temp1.push(park.top());
					park.pop();
				}
				else
				{
					park.pop();
					c[a].end=t;
					break;
				}
			}
			while(!temp1.empty())	
			{
				park.push(temp1.top());
				temp1.pop();
			}
			if(!road.empty()&&park.size()<m)
			{
				park.push(road.front());
				road.pop();
			}
			while(!road.empty())
			{
				if(road.front()!=a)
				{
					temp2.push(road.front());
					road.pop();
				}
				else
				{
					road.pop();
					break;
				}
			}
			while(!temp2.empty())
			{
				road.push(temp2.front());
				temp2.pop();
			}
		}		
	}
	//int s=0;
	sort(c+1,c+1+maxx,cmp);
	for(int i=1;i<=maxx;i++)
	{
		if(c[i].end==0)
		{
			//s++;
			continue;
		}
		cout<<c[i].num<<' ';
		printf("%.2lf\n",n*(c[i].end-c[i].begin));
	}
	while(!park.empty())
	{
		temp1.push(park.top());
		park.pop();
	}
	while(!temp1.empty())
	{
		cout<<temp1.top()<<' ';
		temp1.pop();
	}
	cout<<'\n';
	while(!road.empty())
	{
		cout<<road.front()<<' ';
		road.pop();
	}
	return 0;
}
/*
2  1.5
0  1  5
0  2  10
1  1  15
0  3  20
0  4  25
0  5  30
0  6  35
1  2  40
0  7  45
1  6  50
0  0  0
*/
/*
1  15.00
2  45.00
3  4
7  5
*/
