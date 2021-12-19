#include <stdio.h>
#include <string.h>
int main()
{
	char str_bin(char* str1,char* str2) ;
	char str1[200],str2[100];
	gets(str1);
	gets(str2);
	str_bin(str1,str2);
	return 0;
}
char str_bin(char* str1,char* str2)
{
	int len,i,j;
	char temp;
	strcat(str1,str2);
	len=strlen(str1);
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			if(str1[i]<=str1[j])
			{
				temp=str1[j];
				str1[j]=str1[i];
				str1[i]=temp;
			}
		}
	}
	puts(str1);
}
