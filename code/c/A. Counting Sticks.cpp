#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int main()
{
	string a,b,c;
	getline(cin,a,'+');
	getline(cin,b,'=');
	getline(cin,c);
	int len1=a.length(),len2=b.length(),len3=c.length(),i;
	if((len1+len2+len3)%2!=0)
	{
		cout<<"Impossible";
	}
	else
	{
		if(len1+len2==len3)
		{
			for(i=0;i<len1;i++)
			{
				cout<<'|';
			}
			cout<<'+';
			for(i=0;i<len2;i++)
			{
				cout<<'|';
			}
			cout<<'=';
			for(i=0;i<len3;i++)
			{
				cout<<'|';
			}
		}
		else
		{
			if(len1+len2+1==len3-1)
			{
				for(i=0;i<len1+1;i++)
				{
					cout<<'|';
				}
				cout<<'+';
				for(i=0;i<len2;i++)
				{
					cout<<'|';
				}
				cout<<'=';
				for(i=0;i<len3-1;i++)
				{
					cout<<'|';
				}
				return 0;
			}
			else if(len1+len2-1==len3+1)
			{
				if(len1>1)
				{
					for(i=0;i<len1-1;i++)
					{
						cout<<'|';
					}
					cout<<'+';
					for(i=0;i<len2;i++)
					{
						cout<<'|';
					}
					cout<<'=';
					for(i=0;i<len3+1;i++)
					{
						cout<<'|';
					}
					return 0;
				}
				else if(len2>1)
				{
					for(i=0;i<len1;i++)
					{
						cout<<'|';
					}
					cout<<'+';
					for(i=0;i<len2-1;i++)
					{
						cout<<'|';
					}
					cout<<'=';
					for(i=0;i<len3+1;i++)
					{
						cout<<'|';
					}
					return 0;
				}
				else
				{
					cout<<"Impossible";
				}
			}
			else
			{
				cout<<"Impossible";
			}			
		}
	}
	return 0;
} 
