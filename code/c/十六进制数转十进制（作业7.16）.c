#include <stdio.h>
#include <string.h>
#include <math.h>
int change(char a[]);
int main()
{
	char a[10]={'\0'};
	gets(a);
	printf("%d",change(a));
	return 0;	
}
int change(char a[])
{
	int len,i,sum=0,index=0;
	len=strlen(a);
	for(i=len-1;i>=0;i--)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			sum=sum+(a[i]-48)*pow(16,index);
			index++;
		}
		else if(a[i]>='a'&&a[i]<='z')
		{
			sum=sum+(a[i]-87)*pow(16,index);
			index++;
		}
		else if(a[i]>='A'&&a[i]<='Z')
		{
			sum=sum+(a[i]-55)*pow(16,index);
			index++;
		}
	}
	return sum;
}
