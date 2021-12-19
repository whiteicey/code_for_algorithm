#include <stdio.h>
#include <string.h>
int main()
{
	int n,score,num=0;
	int len;
	scanf("%d",&n);
	int i;
	char a[100]={'\0'};
	while(n--)
	{
		score=0;
		num=0;
		scanf("%s",a);
		len=strlen(a);
		for(i=0;i<len;i++)
		{
			if(a[i]=='X')
			{
				num=0;
				score+=num;
			}
			else if(a[i]=='O')
			{
				num++;
				score+=num;
			}
		}
		printf("%d\n",score);
	}
	return 0;
}
