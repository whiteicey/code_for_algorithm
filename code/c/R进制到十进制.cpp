#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
	char a[100];
	int b,len,i;
	int sum=0,index=0;
	scanf("%s%d",a,&b);
	len=strlen(a);
	for(i=len-1;i>=0;i--)
	{
		if(a[i]=='1')
		{
			sum+=(a[i]-'0')*pow(b,index);
		}
		if(a[i]=='2')
		{
			sum+=(a[i]-'0')*pow(b,index);
		}
		if(a[i]=='3')
		{
			sum+=(a[i]-'0')*pow(b,index);
		}
		if(a[i]=='4')
		{
			sum+=(a[i]-'0')*pow(b,index);
		}
		if(a[i]=='5')
		{
			sum+=(a[i]-'0')*pow(b,index);
		}
		if(a[i]=='6')
		{
			sum+=(a[i]-'0')*pow(b,index);
		}
		if(a[i]=='7')
		{
			sum+=(a[i]-'0')*pow(b,index);
		}
		if(a[i]=='8')
		{
			sum+=(a[i]-'0')*pow(b,index);
		}
		if(a[i]=='9')
		{
			sum+=(a[i]-'0')*pow(b,index);
		}
		if(a[i]=='A')
		{
			sum+=(a[i]-'A'+10)*pow(b,index);
		}
		if(a[i]=='B')
		{
			sum+=(a[i]-'A'+10)*pow(b,index);
		}
		if(a[i]=='C')
		{
			sum+=(a[i]-'A'+10)*pow(b,index);
		}
		if(a[i]=='D')
		{
			sum+=(a[i]-'A'+10)*pow(b,index);
		}
		if(a[i]=='E')
		{
			sum+=(a[i]-'A'+10)*pow(b,index);
		}
		if(a[i]=='F')
		{
			sum+=(a[i]-'A'+10)*pow(b,index);
		}
		index++;
	}
	printf("%d",sum);
	return 0;
}
