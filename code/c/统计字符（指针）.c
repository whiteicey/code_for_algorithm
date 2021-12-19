#include <stdio.h>
#include <string.h>
int main()
{
	int trans(char* a);
	char a[80];
	gets(a);
	trans(a);
	return 0;
} 
int trans(char* a)
{
	int i,j,len1,index=1,len2,number=0;
	char number1;
	char num[80]={'\0'};
	len1=strlen(a);
	for(i=0;i<len1;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			if(a[i-1]<'0'||a[i-1]>'9')
			{
				num[index]=' ';
				index++;
			}
			num[index]=a[i];
			index++;
		}
	}
	len2=strlen(num);
	for(i=0;i<index;i++)
	{
		if(num[i]==' ')
		{
			number++;
		}
	}
	number1=number+'0';
	num[0]=number1;
	printf("%s",num);
}

