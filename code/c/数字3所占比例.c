#include <stdio.h>
#include <string.h>
int main()
{
	char n[100];
	int len,i;
	float rate,number=0;
	gets(n);
	len=strlen(n);
	for(i=0;i<len;i++)
	{
		if((n[i]-'0')==3)
		{
			number++;
		}
	}
	rate=number/len;
	printf("%.2f",rate);
	return 0;
}
