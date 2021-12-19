#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,a,b,i=0,length=0,pos=0;
		char s[200000]={'\0'};
		cin>>l>>a>>b;
		while(i<l)
		{
			s[i]=(char)'a'+pos;
			length++;
			pos++;
			if(length==a)
			{
				length=0;
			}
			if(pos==b)
			{
				pos=0;
			}
			i++;
		}
		cout<<s<<"\n";
	}
	return 0;
 } 
