#include <iostream>
using namespace std;
void fun(int a,int b)
{
	int s[1000],k=0;
	while(b!=0)
	{
		int flag=0;
		for(int i=2;i<=a/2;i++)
		{
			if(a%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0&&a!=1)
		{
			s[k]=a;
			k++;
			b--;
		}
		a++;
	}
	for(int i=0;i<k;i++)
	{
		cout<<s[i]<<" ";
	}
}
int main()
{
	int m,k;
	cin>>m>>k;
	fun(m,k);
	return 0;
}
