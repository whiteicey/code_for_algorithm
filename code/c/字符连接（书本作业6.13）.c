#include <stdio.h>
#include <string.h>
int main()
{
	int len1,len2,i,j;
	char a[80]={'\0'},b[80]={'\0'};
	gets(a);
	gets(b);
	len1=strlen(a); 
	len2=strlen(b);

	if(len2<5)
	{
		for(i=len1,j=0;i<len1+len2&&j<len2;i++,j++)
		{
			a[i]=b[j];
		}
		printf("%s",a);
	}
	else if(len2>=5)
	{
		for(i=len1,j=0;i<len1+5&&j<len2;i++,j++)
		{
			a[i]=b[j];
		}
		printf("%s",a);
	}
	return 0;
}
