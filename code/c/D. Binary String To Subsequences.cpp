#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<vector>
using namespace std;
long long t,n,s,i;
char ch[10000000];
int ans[1000000];
int cnt;
int main() 
{	
	while(~scanf("%lld",&t))
	{
		for(long long i=1;i<=1;i++)
			{
				
			}
		while(t--)
		{
			cin>>n;
			s=0;
			scanf("%s",ch);
			queue<int>q1;//0
			queue<int>q2;//1
			for(i=0;i<n;i++) 
			{
				if(ch[i]=='0') 
				{
					if(q2.size()==0) 
					{
						s++;
						ans[i]=s;
						q1.push(s);
					} 
					else 
					{
						ans[i]=q2.front();
						q1.push(q2.front());
						q2.pop();
					}
				} 
				else 
				{
					if(q1.size()==0) 
					{
						s++;
						ans[i]=s;
						q2.push(s);
					} 
					else 
					{
						ans[i]=q1.front();
						q2.push(q1.front());
						q1.pop();
					}
				}
			}
			printf("%lld\n",s);
			for(i=0;i<n;i++)
			{
				printf("%lld ",ans[i]);
			}
			printf("\n");
			for(long long i=1;i<=1;i++)
			{
				
			}
		}	
	} 
	return 0;
}
