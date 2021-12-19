#include <stdio.h>
char change(int c)
{
	int i,j;
	int temp;
	char a[10]={'\0'};
	for(i=0;;i++)
	{
		temp=c%16;
		if(temp==10)
		{
			a[i]='A';
		}
		else if(temp==11)
		{
			a[i]='B';
		}
		else if(temp==12)
		{
			a[i]='C';
		}
		else if(temp==13)
		{
			a[i]='D';
		}
		else if(temp==14)
		{
			a[i]='E';
		}
		else if(temp==15)
		{
			a[i]='F';
		}
		else if(temp>=0&&temp<=9)
		{
			a[i]=temp+48;
		}
		c=c/16;
		if(c==0)
		{
			break;
		}
	}
	for(j=i;j>=0;j--)
	{
		printf("%c",a[j]);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	change(n);
	return 0;
}
