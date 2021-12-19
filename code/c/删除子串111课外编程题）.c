#include <stdio.h>
#include <string.h>
int main()
{
	char a;
	char str1[100]={'\0'};
	char str2[10]={'\0'};
	gets(str1);
	gets(a);
	gets(str2);
	int len1,len2;
	len1=strlen(str1);
	len2=strlen(str2);
	int i=0,index=0,j;
	int position=0;
	char temp[10]={'\0'},change[100]={'\0'};
	while(i<len1)
	{
		index=0;
		for(j=i;j<(len2+i);j++)
		{
			temp[index]=str1[j];
			index++;
		}
		temp[index]='\0';
		if(strcmp(temp,str2)==0)
		{
			i+=len2;
		}
		else
		{
			change[position]=str1[i];
			position++;
			i++;
		}
	}
	printf("%s",change);
	return 0;
}
