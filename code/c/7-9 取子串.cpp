#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	char str[100]={'\0'};
	while(gets(str)!=NULL)
	{
		int i,m,n,len;
		scanf("%d%d",&m,&n);
		char s;
		s=getchar();
        len=strlen(str);
		for(i=0;i<n&&m+i-1<len;i++)
		{
			printf("%c",str[m+i-1]);
		}
		printf("\n");
	}
	return 0;		
} 
