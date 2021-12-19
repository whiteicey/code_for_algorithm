#include <stdio.h>
#include <string.h>
#include <math.h>
long int change(int a,char b[],int c);
int main()
{
	char b[10]={'\0'};
	int a,c;
	scanf("%d%s%d",&a,&b,&c);
	change(a,b,c);
	return 0;
}
long int change(int a,char b[],int c)
{
	int len;
	int i,index=0;
	long int sum1=0,sum=0;
	len=strlen(b);
	for(i=len-1;i>=0;i--)
	{
		if(b[i]>='a'&&b[i]<='z')
		{
			sum1=sum1+(b[i]-87)*pow(a,index);
			index++;
		}
		else if(b[i]>='A'&&b[i]<='Z')
		{
			sum1=sum1+(b[i]-55)*pow(a,index);
			index++;
		}
		else if(b[i]>='0'&&b[i]<='9')
		{
			sum1=sum1+(b[i]-48)*pow(a,index);
			index++;
		}
	}
	char num[20]={'\0'};
	i=0;
	char temp;
	while(sum1!=0)
	{
		temp=sum1%c;
		if(temp==10)
		{
			temp='A';
		}
		else if(temp==11)
		{
			temp='B';
		}
		else if(temp==12)
		{
			temp='C';
		}
		else if(temp==13)
		{
			temp='D';
		}
		else if(temp==14)
		{
			temp='E';
		}
		else if(temp==15)
		{
			temp='F';
		}
		num[i]=temp+48;
		sum1=sum1/c;
		i++;
	}
	index=i;
	for(i=index-1;i>=0;i--)
	{
		if(num[i]>='0'&&num[i]<='9')
		{
			printf("%c",num[i]);
		}
		else
		{
			printf("%c",num[i]-48);
		}
	}
}
