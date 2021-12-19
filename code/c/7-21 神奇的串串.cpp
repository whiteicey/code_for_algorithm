#include <cstdio>
#include <cstring>
using namespace std;
char s[4020],t[8020];
int len,index,start=0,end;
int check (char s[],int start,int end)
{
	
	if(s[start+1]==s[end-1])
	{
		check(s,start+1,end-1);
	}
	else if(s[start+1]>s[end-1])
	{
		return 1;
	}
	else if(s[start+1]<s[end-1])
	{
		return 0;
	}
}
int main()
{
	while(~scanf("%s%s",s,t))
	{	
		printf("%s",t);
		start=0;
		len=strlen(s);
		end=len-1;
		//index=strlen(t);
		int i;
		while(len!=0)
		{
			if(s[start]>s[end])
			{
				printf("%c",s[end]);
				end--;
				len--;
			}
			else if(s[start]<s[end])
			{
				//t[index]=s[start];
				printf("%c",s[start]);
				start++;
				len--;
			}
			else if(s[start]==s[end])
			{
				int flag;
				flag=check(s,start,end);
				if(flag==0)
				{
					//t[index]=s[start];
					printf("%c",s[start]);
					start++;
					len--;
				}
				else if(flag==1)
				{
					//t[index]=s[end];
					printf("%c",s[end]);
					end--;
					len--;
				}
			}
		}
		printf("\n");
	}
	return 0;
}
