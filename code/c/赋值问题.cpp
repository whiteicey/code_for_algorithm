#include<stdio.h>
#include<string.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    int n,i,vis[26];
    char a,b,c;
    cin>>n;
    memset(vis,0,sizeof(vis));
    vis[0]=1;
    for(i=1;i<=n;i++)
    {
        getchar();
        scanf("%c%c%c",&a,&b,&c);
        vis[a-'a']=vis[c-'a'];
    }
    string str1;
    cin>>str1;
    int flag=1,pos;
	int sum=0;
    for(i=0;i<26;i++)
	{
        if(vis[i])
        {
            sum++;
            pos=i;
        }
    }
    if(sum==1)
    {
    	printf("%c only",pos+'a');
    	return 0;
	}
	sum=0;
    for(i=0;i<26;i++)
	{
        if(vis[i])
        {
        	sum++;
            pos=i;
            if(sum==1)
                printf("%c",i+'a');
            else
                printf(" %c",i+'a');
            flag=0;
        }
    }
    if(flag==1) 
		printf("none");
    printf("\n");
    return 0;
}
