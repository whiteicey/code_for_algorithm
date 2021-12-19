#include <stdio.h>
#include <string.h>
int main()
{
	int i=0,j,k=0,tol,num;
	char a[200],b[20],c[20];
	gets(a);
	gets(b);
	tol=strlen(a);
	num=strlen(b);
	while(i<tol)
	{
		for(j=i;j<num+i;j++)
		{
			c[k]=a[j];
			k++;
		}
		c[k]='\0';
		for(j=0;j<num;j++)
		{
			if(!strcmp(c,b))
			{
				i=i+num;
				k=0;
			}
			else
			{
				printf("%c",a[i]);
				i++;
				k=0;
			}
		}
	}	
	return 0;
 } 
