#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	char a[30]={'V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U'};
	while(1)
	{
		string str1,str3;
		char str2[1000];
		getline(cin,str1);
		if(str1=="ENDOFINPUT")
		{
			return 0;
		}
		gets(str2);
		int len=strlen(str2);
		int i;
		getline(cin,str3);
		for(i=0;i<len;i++)
		{
			//cout<<str2[i]-'A';
			if(str2[i]>='A'&&str2[i]<='Z')
			{
				printf("%c",a[str2[i]-'A']);
			}
			else
			{
				printf("%c",str2[i]);
			}
		}
		printf("\n");
	}
}
