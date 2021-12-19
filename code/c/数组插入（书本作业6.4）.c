#include <stdio.h>
#include <string.h>
int main()
{
	int m,len,i,j,temp,len2;
	char a[17];
	for(i=0;;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		{
			break;
		}
	}
	scanf("%d",&m);
	a[i]=m;
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
} 
