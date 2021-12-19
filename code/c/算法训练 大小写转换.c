#include <stdio.h>
#include <string.h> 
int main()
{
	char a[21]={'\0'};
	gets(a);
	int i,len;
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]=a[i]-'A'+'a';
		}
		else if(a[i]>='a'&&a[i]<='z')
		{
			a[i]=a[i]-'a'+'A';
		}
	}
	printf("%s",a);
	return 0;
}
