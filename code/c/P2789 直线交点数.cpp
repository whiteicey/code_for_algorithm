#include<cstdio>
using namespace std;
long long ans=0;
bool book[3000];
void solve(int a,int x)
{
    if(a==0)
	{
        if(book[x]==0)
		{
            ans++;//去重，统计答案 
            book[x]=1;
        }
    }
    else
	{
        for(int y=a;y>=1;y--)
		{
			solve(a-y,x+y*(a-y));//将其中y条变为平行线 
    	}
	}
}
int n;
int main()
{
    scanf("%d",&n);
    solve(n,0);
    printf("%lld\n",ans);
    return 0;
}
