#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
	char str[1010];
	int index=0;
	while(~scanf("%s",str))
	{
		if(index!=0)
		{
			printf("\n");
		}
		int len,i;
		len=strlen(str);
		for(i=0;i<len;i++)
		{
			if(str[i]>='a'&&str[i]<='z')
			{
				printf("%c",str[i]-'a'+'A');
			}
			else if(str[i]>='A'&&str[i]<='Z')
			{
				printf("%c",str[i]-'A'+'a');
			}
			else
			{
				printf("%c",str[i]);
			}
		}
		index++;
		printf("\n");
	}
	return 0;
}

