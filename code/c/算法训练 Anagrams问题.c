#include <stdio.h>
#include <string.h>
int main()
{
	char a[81]={'\0'},b[81]={'\0'};
	int m[26]={0},n[26]={0};
	scanf("%s",a);
	scanf("%s",b);
	int len1,len2,i,j,k=0,num=0;
	len1=strlen(a);
	len2=strlen(b);
	if(len2!=len2)
	{
		printf("N");
	}
	else
	{
		for(i=0;i<len1;i++)
		{
			if(a[i]>='a'&&a[i]<='z')
			{
				a[i]=a[i]-'a'+'A';
			}
			m[a[i]-'A']++;
			if(b[i]>='a'&&b[i]<='z')
			{
				b[i]=b[i]-'a'+'A';
			}
			n[b[i]-'A']++;
		}
		for(i=0;i<26;i++)
		{
			if(m[i]==n[i])
			{
				k=0;
			}
			else
			{
				k=1;
			}
			if(k==1)
			{
				printf("N");
				break;
			}
		}
		if(k==0)
		{
			printf("Y");
		}
	}
	return 0;
 } 
