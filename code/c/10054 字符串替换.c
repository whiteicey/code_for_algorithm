#include <stdio.h>
#include <string.h>
char change(char a[],char b[],char c[]);
int main()
{
	int i=0,len1,len2,len3,j=0,index=0,k=0;
	char a[81]={'\0'};
	gets(a);
	char b[20]={'\0'},c[20]={'\0'};
//	char e[100]={'\0'};
	while(1)
	{
		scanf("%s%s",&b,&c);
		if(!strcmp(b,"0")&&!strcmp(c,"0"))
		{
			break;
		}
		change(a,b,c);
	}
	printf("%s",a);
	return 0;
}
char change(char a[],char b[],char c[])
{
	int i=0,len1,len2,len3,j=0,index=0,k=0;
	char d[20]={'\0'};
	char e[100]={'\0'};
	len1=strlen(a);
	len2=strlen(b);
	len3=strlen(c);
	while(i<len1)
	{
		for(j=i;j<(len2+i);j++)
		{
			d[k]=a[j];
			k++;
		}
		if(strcmp(d,b)==0)
		{
			strcat(e,c);
			i=i+len2;
			k=0;
			index+=len3;
		}
		else
		{
			e[index]=d[0];
			i++;
			k=0;
			index++;
		}
	}
	strcpy(a,e);
}
