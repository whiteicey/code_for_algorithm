#include <stdio.h>
#include <string.h>
void sort(char* p[],int n)
{
	int i,j;
	char temp[81]={'\0'};
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(strcmp(p[i],p[j])>0)
			{
				strcpy(temp,p[i]);
				strcpy(p[i],p[j]);
				strcpy(p[j],temp);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s",p[i]);
	}
}
int main()
{
	int n;
	char a[10][81]={'\0'};
	scanf("%d",&n);
	char b;
	scanf("%c",&b);
	char* p[10];
	int i=0;
	for(i=0;i<n;i++)
	{
		gets(a[i]);
		p[i]=a[i];
	}
	sort(p,n);
	return 0;
}
