#include <stdio.h>
#include <string.h>
int main()
{
	int len1,index1=0,len2,index2=0,index=0;
	char str1[100]={'\0'},str2[100]={'\0'},str3[100][100]={'\0'},str4[100][100]={'\0'};
	gets(str1);
	gets(str2);
	int i=0,j=0;
	len1=strlen(str1);
	len2=strlen(str2);
	while(i<len1-1)
	{
		if(str1[i]==' '||str1[i]==',')
		{
			j++;
			index=0;
		}
		else
		{
			str3[j][index]=str1[i];
			index++;
		}
		i++;
	}
	index1=j;
	i=0;
	index=0;
	j=0;
	while(i<len2-1)
	{
		if(str2[i]=='='||str2[i]=='+'||str2[i]=='-'||str2[i]=='*'||str2[i]=='/'||str2[i]=='%'||str2[i]=='('||str2[i]==')'||str2[i]==';')
		{
			j++;
			index=0;
		}
		else
		{
			str4[j][index]=str2[i];
			index++;
		}
		i++;
	}
	index2=j;
	for(i=0;i<=index1;i++)
	{
		for(j=0;j<=index2;j++)
		{
			if(strcmp(str3[i],str4[j])==0)
			{
				printf("%s ",str4[j]);
				break;
			}
		}
	}
	return 0;
}
