#include <stdio.h>
int main()
{
	char a[81];
	int i,num,word;
	char c;
	gets(a);
	for(i=0;(c=a[i])!='\0';i++)
	{
		c=a[i];
		if(c==' ')
		{
			 num=num+1;
		}
	}
	printf("%d",num);
	return 0;
}
