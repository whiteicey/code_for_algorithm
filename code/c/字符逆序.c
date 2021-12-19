#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	int tol,i;
	gets(a);
	tol=strlen(a);
	for(i=tol-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}
