#include <stdio.h>
int main()
{
	char str1[10]="very";
	char str2[]="good\n";
	int k=0,j=0;
	while(str1[k])
	k++;
	while(str2[j])
	{
		str1[k++]=str2[j++];
	}
	str1[k]='\0';
	printf("%s",str1);
	return 0;
}
