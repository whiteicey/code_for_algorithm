#include<stdio.h>
#include<string.h>
int main()
{
	char a[250],b[10]={'0','1','2','3','4','5','6','7','8','9'};
	int n,i,j,k=0,flag=0;
	
	gets(a);
	scanf("%d",&n);
	
	for(j=9;j>0;j--)
	{
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]==b[j])
			{
				a[i]='a';k++;
			}
			if(k==n)break;
		}
		if(k==n)break;
	}
	
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!='0' && a[i]!='a')
		{
			flag=1;
			for(i=i;i<strlen(a);i++)
			if(a[i]!='a')printf("%c",a[i]);
		}
		if(flag==1)break;
	}
}
