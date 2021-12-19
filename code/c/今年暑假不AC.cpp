#include <stdio.h>
#include <algorithm>
using namespace std;
 
struct node 
{
	int t1;//电视开始时间 
	int t2;//电视的结束时间 
}a[105]; 
 
int cmp(node u,node v)//对节目按照结束时间从小到大排序，如果结束的时间相同，则按照开始的 
{ 
	if(u.t2==v.t2)//如果结束时间相同的话，开始的越迟，看节目的时间越短，就能尽可能的多看电视
		return u.t1>v.t1;
	return u.t2<v.t2;//例如：2-3,3-4,2-4，你肯定会看2-3,3-4的两个电视，而不看2-4这个电视 
}
 
int main()
{
	int n,i,j,k,t;
	while(scanf("%d",&n)&&n)
	{
		for(i=0;i<n;i++) 
			scanf("%d%d",&a[i].t1,&a[i].t2);
		sort(a,a+n,cmp);//对时间进行排序 
		for(i=1,t=a[0].t2,k=1;i<n;i++)//如果开始 的时间比他这个结束的时间迟，则就k++ 
		{
			if(a[i].t1>=t) 
			{
				t=a[i].t2;
				k++;
			}
		}
		printf("%d\n",k); 
	}
	return 0;
}
