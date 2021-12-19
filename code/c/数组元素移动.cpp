#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	int num=0,a[1000],b[1000];
	int an=0,bn=0,tmp;
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==','||s[i]=='\n')
		{
			if(num%2!=0)
			{
				a[an]=num;
				an++;
			}
			else
			{
				b[bn]=num;
				bn++;
			}
			num=0;
		}
		else if(s[i]>='0'&&s[i]<='9')
		{
			int tmp=s[i]-'0';
			num*=10;
			num+=tmp;
		}
	}
	if(num%2!=0)
	{
		a[an]=num;
		an++;
	}
	else
	{
		b[bn]=num;
		bn++;
	}
	for(int i=0;i<an;i++)
	{
		if(i==an-1)
		{
			cout<<a[i];
			break;
		}
		cout<<a[i]<<',';
	}
	for(int i=0;i<bn;i++)
	{
		if(an==0)
		{
			if(i==bn-1)
			{
				cout<<b[i];
				break;
			}
			cout<<b[i]<<',';
			continue;
		}
		cout<<','<<b[i];
	}
	return 0;
}
 
