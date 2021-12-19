#include <stdio.h>
#include <string.h> 
int main()
{
	char c[40],a[40],i,index=0;
	gets(c);
	for(i=0;i<40;i++)
	{
		if(c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U'||c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
		{
			a[index]=c[i];
			index++;
		}
	}
	if(index==0)
	{
		printf(" ");
	}
	else
	{
		for(i=0;i<index;i++)
		{
			printf("%c",a[i]);
		}
	}
	return 0;
}
