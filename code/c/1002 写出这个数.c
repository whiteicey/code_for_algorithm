#include <stdio.h>
#include <string.h> 
int main()
{
	char a[1000]={'\0'};
	gets(a);
	int len=strlen(a);
	int i,sum=0;
	for(i=0;i<len;i++)
	{
		sum+=(a[i]-48);
	}
	i=0;
	char b[10]={'\0'};
	int index=0;
	while(sum!=0)
	{
		b[i]=sum%10;
		i++;
		index++;
		sum/=10;
	}
	//len=strlen(b);
	for(i=index-1;i>=0;i--)
	{
		if(i!=0)
		{
			if(b[i]==1)
			{
				printf("yi ");
			}
			else if(b[i]==2)
			{
				printf("er ");
			}
			else if(b[i]==3)
			{
				printf("san ");
			}
			else if(b[i]==4)
			{
				printf("si ");
			}
			else if(b[i]==5)
			{
				printf("wu ");
			}
			else if(b[i]==6)
			{
				printf("liu ");
			}
			else if(b[i]==7)
			{
				printf("qi ");
			}
			else if(b[i]==8)
			{
				printf("ba ");
			}
			else if(b[i]==9)
			{
				printf("jiu ");
			}
			else if(b[i]==0)
			{
				printf("ling ");
			}
		}
		else
		{
			if(b[i]==1)
			{
				printf("yi");
			}
			else if(b[i]==2)
			{
				printf("er");
			}
			else if(b[i]==3)
			{
				printf("san");
			}
			else if(b[i]==4)
			{
				printf("si");
			}
			else if(b[i]==5)
			{
				printf("wu");
			}
			else if(b[i]==6)
			{
				printf("liu");
			}
			else if(b[i]==7)
			{
				printf("qi");
			}
			else if(b[i]==8)
			{
				printf("ba");
			}
			else if(b[i]==9)
			{
				printf("jiu");
			}
			else if(b[i]==0)
			{
				printf("ling");
			}
		}
	}
	return 0;
}
