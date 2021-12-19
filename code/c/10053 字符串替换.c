#include <stdio.h>
#include <string.h>
int main()
{
	char change(char* used,char* ex,int i);
	char used[80];
	char ex[10][10];
	int i;
	gets(used);
	for(i=0;ex[i]!="0 0";i++)
	{
		gets(ex);
	}
	change(used,ex,i);
	return 0
}
char change(char* used,char* ex,int i)
{
	int k=0,len1,len2;
	while(k<i)
	{
		len1=strlen(ex[k]);
		len2=(len1-1)/2;
		for()
	}
}
