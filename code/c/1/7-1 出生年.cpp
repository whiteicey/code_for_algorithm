#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int f(int y)
{
    int b[11],res=0;
    memset(b,0,sizeof(b));
    b[y%10]=1;
    b[y/10%10]=1;
    b[y/100%10]=1;
    b[y/1000]=1;
    for(int i=0;i<10;i++)
	{
        if(b[i]==1)
		{
            res++;
        }
    }
    return res;
}
int main()
{
    int y,n,cnt=0;
    cin>>y>>n;
    while(f(y)!=n)
	{
        cnt++;
        y++;
    }
    printf("%d %04d",cnt,y);
    return 0;
}
