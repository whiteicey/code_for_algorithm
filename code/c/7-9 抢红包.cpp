#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
using namespace std;
struct rb
{
    int id;
    int num;
    int sum;
};
bool cmp(rb a,rb b)
{
    if(a.sum!=b.sum)
    {
    	return a.sum>b.sum;
	}
    else if(a.num!=b.num)
    {
    	return a.num>b.num;
	} 
	else
	{
		return a.id<b.id;
	}   
}
rb p[10010];
int n,m,a,b;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
	{
        p[i].id=i;
        cin>>m;
        while(m--)
		{
			cin>>a>>b;
            p[a].num++;
            p[a].sum+=b;
            p[i].sum-=b;
        }
    }
    sort(p+1,p+n+1,cmp);
    for(int i=1;i<=n;i++)
    {
    	printf("%d %.2lf\n",p[i].id,(p[i].sum*1.0)/100);
	}   
    return 0;
}
