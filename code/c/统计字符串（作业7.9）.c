#include <stdio.h>
#include <string.h>
void sum(char a[]);
int main()
{
	char a[21]={'\0'};
	gets(a);
	sum(a);
	return 0;
}
void sum(char a[])
{
	int sum_letter=0,sum_num=0,sum_=0,sum_others=0;
	int i,len;
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
		{
			sum_letter++;
		}
		else if(a[i]>='0'&&a[i]<='9')
		{
			sum_num++;
		}
		else if(a[i]==' ')
		{
			sum_++;
		}
		else
		{
			sum_others++;
		}
	}
	printf("%d %d %d %d",sum_letter,sum_num,sum_,sum_others);
}
