#include <stdio.h>
#include <string.h>
int main()
{
	int len,m,i;
	char a[100]={'\0'};
	char b[100]={'\0'};
	char* p;
	gets(a);
	len=strlen(a);
	scanf("%d",&m);
	p=&a[m-1];
	for(i=0;i<len-m+1;i++)
	{
		b[i]=* p;
		p++;
	}
	printf("%s",b);
	return 0;
} 
