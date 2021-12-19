#include <iostream>
#include <stack>
#include <cstdio>
using namespace std;
stack<bool> brackets;
char s[1000];
int main()
{
	cin>>s;
	bool flag=true;
	for(int i=0;s[i]!='@';i++)
	{
		if(s[i]=='(')
		{
			brackets.push(true);
		}
		else if(s[i]==')')
		{
			if(brackets.empty())
			{
				flag=false;
				break;
			}
			brackets.pop();
		}
	}
	if(!brackets.empty())
	{
		flag=false;
	}
	printf("%s\n",flag?"YES":"NO");
	return 0;
}
