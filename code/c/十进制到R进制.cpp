#include <iostream>
#include <cstdio>
using namespace std;
char b[20]={'1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int main()
{
	int m,n;
	cin>>m>>n;
	char a[100];
	int i=0;
	while(m>0)
	{
		a[i]=b[m%n-1];
		m/=n;
		i++;
	}
	for(i=i-1;i>=0;i--)
	{
		cout<<a[i];
	}
	return 0;
}
