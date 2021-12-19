#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char a[10][100]={'\0'};
	int i,j;
	getchar();
	for(i=0;i<n;i++)
	{
		gets(a[i]);
	}
	char temp[100]={'\0'};
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{
				strcpy(temp,a[j]);
				strcpy(a[j],a[i]);
				strcpy(a[i],temp);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}
	return 0;
}
