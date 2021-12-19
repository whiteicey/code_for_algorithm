#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	char b[1000];
	char a[1000]={'\0'};
	char symbol='+';
	char num[10000];
	char x;
	gets(b);
	int len,i,j,index=0,sum=0;
	double index1=0,index2=0,index3=0,index4=0;
	
	len=strlen(b);
	
	
	for(i=0;i<len;i++)
	{
		if(b[i]=='+'||b[i]=='-'||b[i]=='=')
		{
			if(b[i+1]>='a'&&b[i+1]<='z')
			{
				a[index]=b[i];
				index++;
				a[index]='1';
				index++;
			}
			else
			{
				a[index]=b[i];
				index++;
			}
		}
		else if(i==0&&b[i]>='a'&&b[i]<='z')
		{
			a[index]='1';
			index++;
			a[index]=b[i];
			index++;
		}
		else
		{
			a[index]=b[i];
			index++;
		}
	}
	index=0;
	
	
	for(i=0;a[i]!='=';i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			num[index]=a[i];
			index++;
		}
		else if(a[i]>='a'&&a[i]<='z')
		{
			x=a[i];
			for(j=0;j<index;j++)
			{
				sum=sum+(num[j]-'0')*pow(10,index-j-1);
			}
			if(symbol=='+')
			{
				index1+=sum;
			}
			else
			{
				index1+=sum*(-1);
			}
			for(j=0;j<index;j++)
			{
				num[j]='\0';
			}
			sum=0;
			index=0;
		}
		else if(a[i]=='+'||a[i]=='-')
		{
			for(j=0;j<index;j++)
			{
				sum+=(num[j]-'0')*pow(10,index-j-1);
			}
			if(symbol=='+')
			{
				index2+=sum;
			}
			else
			{
				index2+=sum*(-1);
			}
			for(j=0;j<index;j++)
			{
				num[j]='\0';
			}
			sum=0;
			symbol=a[i];
			index=0;
		}
	}
	if(num[0]!='\0')
	{
		for(j=0;j<index;j++)
		{
			sum+=(num[j]-'0')*pow(10,index-j-1);
		}
		if(symbol=='+')
		{
			index2+=sum;
		}
		else
		{
			index2+=sum*(-1);
		}
		for(j=0;j<index;j++)
		{
			num[j]='\0';
		}
		sum=0;
		symbol=a[i];
		index=0;
	}
	
	
	len=strlen(a);
	i++;
	//int index;
	//index=i;
	symbol='+';
	for(i=i;i<len;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			num[index]=a[i];
			index++;
		}
		else if(a[i]>='a'&&a[i]<='z')
		{
			x=a[i];
			for(j=0;j<index;j++)
			{
				sum=sum+(num[j]-'0')*pow(10,index-j-1);
			}
			if(symbol=='+')
			{
				index3+=sum;
			}
			else
			{
				index3+=sum*(-1);
			}
			for(j=0;j<index;j++)
			{
				num[j]='\0';
			}
			sum=0;
			index=0;
		}
		else if(a[i]=='+'||a[i]=='-')
		{
			for(j=0;j<index;j++)
			{
				sum+=(num[j]-'0')*pow(10,index-j-1);
			}
			if(symbol=='+')
			{
				index4+=sum;
			}
			else
			{
				index4+=sum*(-1);
			}
			for(j=0;j<index;j++)
			{
				num[j]='\0';
			}
			sum=0;
			symbol=a[i];
			index=0;
		}
	}
	if(num[0]!='\0')
	{
		for(j=0;j<index;j++)
		{
			sum+=(num[j]-'0')*pow(10,index-j-1);
		}
		if(symbol=='+')
		{
			index4+=sum;
		}
		else
		{
			index4+=sum*(-1);
		}
		for(j=0;j<index;j++)
		{
			num[j]='\0';
		}
		sum=0;
		symbol=a[i];
		index=0;
	}
	printf("%c=%.3lf",x,(index4-index2)/(index1-index3)==0?0:(index4-index2)/(index1-index3));
	return 0;
} 
