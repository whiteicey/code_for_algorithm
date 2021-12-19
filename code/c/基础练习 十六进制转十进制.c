#include <stdio.h>
#include <string.h>
#include <math.h>
void change(int len,int i);
char a[10]={'\0'};
int main()
{
	int len,i;
	int b[10];
	gets(a);
	len=strlen(a);
	change(len,i);
	return 0;
}
void change(int len,int i)
{
	int index,j;
	long long int sum=0;
	index=len-1;
	for(j=0;j<len;j++)
	{
		if(a[j]>='0'&&a[j]<='9')
		{
			sum=sum+(a[j]-48)*pow(16,index);
			index--;
		}
		else if(a[j]>='A'&&a[j]<='Z')
		{
			sum=sum+(a[j]-55)*pow(16,index);
			index--;
		}
		
	}
	printf("%lld",sum);
}
