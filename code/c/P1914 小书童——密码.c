#include <stdio.h>
#include <string.h>
int main()
{
	int n,len;
	char al[28]={' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char a[100]={'\0'};
	scanf("%d%s",&n,a);
	len=strlen(a);
	int i;
	for(i=0;i<len;i++)
	{
		if(a[i]+n>='a'&&a[i]+n<='z')
		{
			a[i]=a[i]+n;
		}
		else
		{
			a[i]=al[(a[i]-'a'+n)%26+1];
		}
	}
	printf("%s",a);
	return 0;
}
