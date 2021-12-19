#include <iostream>
#include <stack>
#include <string>
#include <cstdio>
using namespace std;
stack<int> q;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		int ans=0;
		int flag = 1;
		for(int i = 0;i < s.length();i++)
		{
			if(s[i] >= '0' && s[i] <= '9')
			{
				 q.push(flag*(s[i]-'0'));
			} 
			else if(s[i] == '+' || s[i] == '-')
			{
				if(s[i] == '-')
				{
					flag = -1;
				}
				else
				{
					flag = 1;
				}
			}
			else
			{
				int t1,t2;
				t1=q.top();
				q.pop();
				if (s[i] == '/')
				{
					t2 = s[i+1] - '0';
					i++;
					ans = t1/t2;
				}
				else
				{
					t2 = s[i+1] - '0';
					i++;
					ans = t1*t2;
				}
				q.push(ans);
			}
		}
		ans = 0;
		while(!q.empty())
		{
			ans+=q.top();
			q.pop();
		}
		if(ans == 24)
		{
			cout<<"Yes\n";
		}
		else
		{
			cout<<"No\n";
		}
	}
	return 0;
}
