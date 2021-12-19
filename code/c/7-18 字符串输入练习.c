#include <stdio.h>
#include <string.h>
int main()
{
	char a;
	int num=0;
	while(1)
	{
		scanf("%c",&a);
		if(a=='\n')
		{
			break;
		}
		num++;
	}
	printf("%d",num);
	return 0;
}
