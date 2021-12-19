#include <iostream>
using namespace std;
int main()
{
	int n,t,s,i,be,end;
	cin>>n>>t>>s;
	if(t-s>0)
	{
		be=t-s;
	}
	else
	{
		be=1;
	}
	if(t+s<=n)
	{
		end=t+s;
	}
	else
	{
		end=n;
	}
	for(i=be;i<=end;i++)
	{
		if(i==be&&be==1)
		{
			if(i==t)
			{
				cout<<'('<<i<<')'<<' ';
			}
			else
			{
				cout<<i<<' ';
			}			
		}
		else if(i==be&&be!=1)
		{
			if(i==t)
			{
				cout<<"<<"<<' '<<'('<<i<<')'<<' ';
			}
			else
			{
				cout<<"<<"<<' '<<i<<' ';
			}
			
		}
		else if(i==end&&end!=n)
		{
			if(i==t)
			{
				cout<<'('<<i<<')'<<' '<<">>";
			}
			else
			{
				cout<<i<<' '<<">>";
			}
			
		}
		else if(i==end&&end==n)
		{
			if(i==t)
			{
				cout<<'('<<i<<')';
			}
			else
			{
				cout<<i;
			}
			
		}
		else if(i>be&&i<end)
		{
			if(i==t)
			{
				cout<<'('<<i<<')'<<' ';
			}
			else
			{
				cout<<i<<' ';
			}
		}
	}
	return 0;
}
