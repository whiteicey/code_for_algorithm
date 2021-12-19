#include <stdio.h>
#include <string.h>
int main()
{
	FILE* r;
	r=fopen("test.txt","w");
	if(fopen("test.txt","w")==NULL)
	{
		exit(0);
	}
	int i=0,len;
	char c[100]={'\0'};
	gets(c);
	len=strlen(c);
	for(i=0;i<len;i++)
	{
		if(c[i]>='a'&&c[i]<='z')
		{
			c[i]=c[i]-'a'+'A';
		}
	}
	i=0;
	while(c[i]!='!')
	{
		fputc(c[i],r);
		i++;
	}
	fclose(r);
	return 0;
} 
