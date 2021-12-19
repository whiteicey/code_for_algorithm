#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	string a;
	int m,n,sum=0,k=0,e;
	cin>>m>>a>>n;
	for(int i=a.size()-1;i>=0;i--)
	{
		if(a[i]>='A')
		{
			sum+=(a[i]-'A'+10)*pow(m,k);
			k++;
		}
		else
		{
			sum+=(a[i]-'0')*pow(m,k);
			k++;
		}
	}
	k=0;
	int b[100000];
	while(sum>0)
	{
		b[k]=sum%n;
		sum/=n;
		k++;
	}
	for(int i=k-1;i>=0;i--)
	{
		if(b[i]>=10)
		{
			cout<<char(b[i]+'A'-10);
		}
		else
		{
			cout<<b[i];
		}
	}
	return 0;
}
