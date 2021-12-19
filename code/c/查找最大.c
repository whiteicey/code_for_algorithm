#include <stdio.h>
#include <string.h>
int main()
{
	int len;
	char a[1000]={'\0'};
	char b[1000]={'\0'};
	int num[1000]={0};
	while(~scanf("%s",a))
	{
		char c;
		c=getchar();
		len=strlen(a);
		int i,j;
		for(i=0;i<len;i++)
		{
			if(a[i]>='a'&&a[i]<='z')
			{
				b[i]=a[i]-'a'+'A';
			}
			else
			{
				b[i]=a[i];
			}
		}
		char max=b[0];
		num[0]=1;
		for(i=0;i<len;i++)
		{
			if(b[i]>max)
			{
				max=b[i];
				for(j=0;j<i;j++)
				{
					num[j]=0;
				}
				num[i]=1;
			}
			else if(b[i]==max)
			{
				num[i]=1;
			}
		}
		for(i=0;i<len;i++)
		{
			printf("%c",a[i]);
			if(num[i]==1)
			{
				printf("(max)");
			}
		}
		for(i=0;i<len;i++)
		{
			a[i]='\0';
			b[i]='\0';
			num[i]=0;
		}
		printf("\n");
	}
	return 0;
}
