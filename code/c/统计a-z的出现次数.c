#include <stdio.h>
#include <string.h>
int main()
{
	char a[81]={"\0"};
	gets(a);
	int count[26]={0};
	int len,i;
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		count[a[i]-'a']++;
	}
} 
