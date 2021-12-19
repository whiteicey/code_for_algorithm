#include <stdio.h>
int main()
{
	int letter=0,number=0,blank=0,others=0;
	char c;
	while((c=getchar())!='\n')
	{
		if(c>='A'&&c<='Z'||c>='a'&&c<='z')
		{
			letter++;
		}
		else if(c>='0'&&c<='9')
		{
			number++;
		}
		else if(c==' ')
		{
			blank++;
		}
		else
		{
			others++;
		}
	}
		printf("%d %d %d %d",letter,number,blank,others);
	return 0;
}
