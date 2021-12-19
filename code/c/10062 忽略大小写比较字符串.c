#include <stdio.h>
#include <string.h>
char compared(char a[],char b[]);
int main()
{
	char a[81],b[81];
	gets(a);
	gets(b);
	compared(a,b);
	return 0;
}
char compared(char a[],char b[])
{
	int i;
	int len1,len2;
	len1=strlen(a);
	len2=strlen(b);
	for(i=0;i<len1;i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]=a[i]-65+97;
		}
	}
	for(i=0;i<len2;i++)
	{
		if(b[i]>='A'&&b[i]<='Z')
		{
			b[i]=b[i]-65+97;
		}
	}
	if(strcmp(a,b)>0)
	{
		printf(">");
	}
	else if(strcmp(a,b)<0)
	{
		printf("<");
	}
	else
	{
		printf("=");
	}
}
