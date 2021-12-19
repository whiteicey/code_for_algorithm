#include<cstdio>
#include<cstring>
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    char a[10000][100],b[10000][100];
    int i,j;
    for(i=0;i<m;i++)
    {
    	scanf("%s%s",a[i],b[i]);
	}
	char c[100];
	for(i=0;i<n;i++)
	{
		scanf("%s",c);
		for(j=0;j<m;j++)
		{
			if(strcmp(b[j],c)==0)
			{
				printf("%s\n",a[j]);
				break;
			}
		}
		if(j==m)
		{
			printf("eh\n");
		}
	}
    return 0;
} 

