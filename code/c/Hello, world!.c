#include <stdio.h>
#include <string.h>
int main()
{
	int i=0,a[100],j;
	char c;
	while((c=getchar())!=EOF);
	{
		scanf("%d",&a[i]);
		i++;	
	}
	for(j=0;j<i;j++)
	{
		printf("%c",a[j]);
	}
	return 0;
} 
