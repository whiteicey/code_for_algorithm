#include <stdio.h>
#include <string.h>
int main()
{
	void longest(char a[]);
	char a[80];
	gets(a);
	longest(a);
	return 0;
}
void longest(char a[])
{
	int i=0,len1,num1=0,num2=0,len2,j,k=0,l,index=0;
	char b[20],c[20];
	len1=strlen(a);
	while(i<len1)
	{
		for(j=i;j<len1;j++)
		{
			if(a[j]==' '||a[j]=='.')
			{
				i=i+1;
				break;
			}
			else
			{
				num1++;
				b[index]=a[j];
				index++;
			}
		}
		i=i+num1;
		if(num1>num2)
		{
			num2=num1;
			for(k=0;k<num2;k++)
			{
				c[k]=b[k];
			}
		}
		num1=0;
		index=0;
	}
	for(l=0;l<num2;l++)
	{
		printf("%c",c[l]);
	}
}
