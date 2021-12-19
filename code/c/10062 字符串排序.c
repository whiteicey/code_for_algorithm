#include <stdio.h>
#include <string.h>
char a[30][21]={'\0'};
void sort(int n);
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	sort(n);
	return 0;
}
void sort(int n)
{
	int i,j;
	char temp[20]={'\0'};
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
//			else if(strcmp(a[i],a[j])<0)
//			{
//				strcpy(temp,a[j]);
//				strcpy(a[i],a[j]);
//				strcpy(a[j],temp);
//			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}
}

