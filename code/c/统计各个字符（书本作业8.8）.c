#include <stdio.h>
#include <string.h>
int main()
{
	char a[100]={'\0'};
	gets(a);
	int big=0,little=0,space=0,num=0,others=0;
	char* p;
	p=a;
	int len;
	int i=0;
	len=strlen(a);
	while(i<=len-1)
	{
		if(* p>='A'&&* p<='Z')
		{
			big++;
		}
		else if(* p>='a'&&* p<='z')
		{
			little++;
		}
		else if(* p==' ')
		{
			space++;
		}
		else if(* p>='0'&&* p<='9')
		{
			num++;
		}
		else
		{
			others++;
		}
		p++;
		i++;
	}
	printf("%d %d %d %d %d",big,little,space,num,others);
	return 0;
}
